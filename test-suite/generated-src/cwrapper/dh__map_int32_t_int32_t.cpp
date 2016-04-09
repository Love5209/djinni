// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "map_record.hpp"

#include "dh__map_int32_t_int32_t.hpp"
#include "dh__map_record.hpp"
#include "dh__map_string_int64_t.hpp"

static void(*s_py_callback_map_int32_t_int32_t___delete)(DjinniObjectHandle *);
void map_int32_t_int32_t_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_py_callback_map_int32_t_int32_t___delete = ptr;
}

void map_int32_t_int32_t___delete(DjinniObjectHandle * drh) {
    s_py_callback_map_int32_t_int32_t___delete(drh);
}
void optional_map_int32_t_int32_t___delete(DjinniOptionalObjectHandle *  drh) {
    s_py_callback_map_int32_t_int32_t___delete((DjinniObjectHandle *) drh);
}
static int32_t ( * s_py_callback_map_int32_t_int32_t__get_value)(DjinniObjectHandle *, int32_t);

void map_int32_t_int32_t_add_callback__get_value(int32_t( * ptr)(DjinniObjectHandle *, int32_t)) {
    s_py_callback_map_int32_t_int32_t__get_value = ptr;
}

static size_t ( * s_py_callback_map_int32_t_int32_t__get_size)(DjinniObjectHandle *);

void map_int32_t_int32_t_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_map_int32_t_int32_t__get_size = ptr;
}

static DjinniObjectHandle * ( * s_py_callback_map_int32_t_int32_t__python_create)();

void map_int32_t_int32_t_add_callback__python_create(DjinniObjectHandle *( * ptr)()) {
    s_py_callback_map_int32_t_int32_t__python_create = ptr;
}

static void ( * s_py_callback_map_int32_t_int32_t__python_add)(DjinniObjectHandle *, int32_t, int32_t);

void map_int32_t_int32_t_add_callback__python_add(void( * ptr)(DjinniObjectHandle *, int32_t, int32_t)) {
    s_py_callback_map_int32_t_int32_t__python_add = ptr;
}

static int32_t ( * s_py_callback_map_int32_t_int32_t__python_next)(DjinniObjectHandle *);

void map_int32_t_int32_t_add_callback__python_next(int32_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_map_int32_t_int32_t__python_next = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniMapInt32TInt32T::fromCpp(const std::unordered_map<int32_t, int32_t> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_py_callback_map_int32_t_int32_t__python_create(), & map_int32_t_int32_t___delete);
    for (const auto & it : dc) {
        s_py_callback_map_int32_t_int32_t__python_add(_handle.get(), it.first, it.second);
    }

    return _handle;
}

std::unordered_map<int32_t, int32_t> DjinniMapInt32TInt32T::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::unordered_map<int32_t, int32_t>_ret;
    size_t size = s_py_callback_map_int32_t_int32_t__get_size(dh.get());

    for (int i = 0; i < size; i++) {
        auto _key_c = s_py_callback_map_int32_t_int32_t__python_next(dh.get()); // key that would potentially be surrounded by unique pointer
        auto _val = s_py_callback_map_int32_t_int32_t__get_value(dh.get(), _key_c);

        auto _key = _key_c;
        _ret.emplace(std::move(_key), std::move(_val));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniMapInt32TInt32T::fromCpp(std::experimental::optional<std::unordered_map<int32_t, int32_t>> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniMapInt32TInt32T::fromCpp(std::move(* dc)), optional_map_int32_t_int32_t___delete);
}

std::experimental::optional<std::unordered_map<int32_t, int32_t>>DjinniMapInt32TInt32T::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::experimental::optional<std::unordered_map<int32_t, int32_t>>(DjinniMapInt32TInt32T::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), map_int32_t_int32_t___delete)));
    }
    return std::experimental::nullopt;
}

