#ifndef SMARTPOINT_H
#define SMARTPOINT_H

template<typename Type>
class SmartPoint {
private:
    Type* resource;

public:
    // Конструктор
    explicit SmartPoint(Type* r = nullptr) : resource(r) {}

    // Деструктор
    ~SmartPoint() {
        delete resource;
    }

    // Запрет копирующих конструкторов и операторов
    SmartPoint(const SmartPoint&) = delete;
    SmartPoint& operator=(const SmartPoint&) = delete;

    // Перемещающий конструктор
    SmartPoint(SmartPoint&& other) noexcept : resource(other.resource) {
        other.resource = nullptr;
    }

    // Перемещающий оператор присваивания
    SmartPoint& operator=(SmartPoint&& other) noexcept {
        if (this != &other) {
            delete resource;
            resource = other.resource;
            other.resource = nullptr;
        }
        return *this;
    }

    // Доступ к управляемому объекту
    Type& operator*() const {
        return *resource;
    }

    Type* operator->() const {
        return resource;
    }

    Type* get() const {
        return resource;
    }

    // Сбросить указатель
    void reset(Type* r = nullptr) {
        delete resource;
        resource = r;
    }

    // Освободить владение ресурсом
    Type* release() {
        Type* temp = resource;
        resource = nullptr;
        return temp;
    }
};

#endif // SMARTPOINT_H
