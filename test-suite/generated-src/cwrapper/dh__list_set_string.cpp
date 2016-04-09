// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nested_collection.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "nested_collection.hpp"

#include "dh__list_set_string.hpp"
#include "dh__nested_collection.hpp"
#include "dh__set_string.hpp"

static void(*s_py_callback_list_set_string___delete)(DjinniObjectHandle *);
void list_set_string_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_set_string___delete = ptr;
}

void list_set_string___delete(DjinniObjectHandle * drh) {
    s_py_callback_list_set_string___delete(drh);
}
void optional_list_set_string___delete(DjinniOptionalObjectHandle *  drh) {
    s_py_callback_list_set_string___delete((DjinniObjectHandle *) drh);
}
static DjinniObjectHandle * ( * s_py_callback_list_set_string__get_elem)(DjinniObjectHandle *, size_t);

void list_set_string_add_callback__get_elem(DjinniObjectHandle *( * ptr)(DjinniObjectHandle *, size_t)) {
    s_py_callback_list_set_string__get_elem = ptr;
}

static size_t ( * s_py_callback_list_set_string__get_size)(DjinniObjectHandle *);

void list_set_string_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_set_string__get_size = ptr;
}

static DjinniObjectHandle * ( * s_py_callback_list_set_string__python_create)();

void list_set_string_add_callback__python_create(DjinniObjectHandle *( * ptr)()) {
    s_py_callback_list_set_string__python_create = ptr;
}

static void ( * s_py_callback_list_set_string__python_add)(DjinniObjectHandle *, DjinniObjectHandle *);

void list_set_string_add_callback__python_add(void( * ptr)(DjinniObjectHandle *, DjinniObjectHandle *)) {
    s_py_callback_list_set_string__python_add = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniListSetString::fromCpp(const std::vector<std::unordered_set<std::string>> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_py_callback_list_set_string__python_create(), & list_set_string___delete);
    size_t size = dc.size();
    for (int i = 0; i < size; i++) {
        auto _el = DjinniSetString::fromCpp(dc[i]);
        s_py_callback_list_set_string__python_add(_handle.get(), _el.release());
    }

    return _handle;
}

std::vector<std::unordered_set<std::string>> DjinniListSetString::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::vector<std::unordered_set<std::string>>_ret;
    size_t size = s_py_callback_list_set_string__get_size(dh.get());
    _ret.reserve(size);

    for (int i = 0; i < size; i++) {
        _ret.push_back(DjinniSetString::toCpp(djinni::Handle<DjinniObjectHandle>(s_py_callback_list_set_string__get_elem(dh.get(), i), set_string___delete)));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniListSetString::fromCpp(std::experimental::optional<std::vector<std::unordered_set<std::string>>> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniListSetString::fromCpp(std::move(* dc)), optional_list_set_string___delete);
}

std::experimental::optional<std::vector<std::unordered_set<std::string>>>DjinniListSetString::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::experimental::optional<std::vector<std::unordered_set<std::string>>>(DjinniListSetString::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), list_set_string___delete)));
    }
    return std::experimental::nullopt;
}

