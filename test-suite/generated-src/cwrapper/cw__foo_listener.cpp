// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "foo_listener.hpp"

#include "cw__foo_listener.hpp"
#include "dh__foo_some_other_record.hpp"
#include <chrono>
#include <experimental/optional>
#include <vector>

static DjinniString *(*s_py_callback_foo_listener_on_string_change)(DjinniObjectHandle * , DjinniString *);
static int32_t(*s_py_callback_foo_listener_get_private_int)(DjinniObjectHandle * );
static DjinniString *(*s_py_callback_foo_listener_on_changes_string_returned)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t);
static DjinniBinary *(*s_py_callback_foo_listener_on_changes_binary_returned)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t);
static uint64_t(*s_py_callback_foo_listener_on_changes_date_returned)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t);
static int32_t(*s_py_callback_foo_listener_on_changes_int_returned)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t);
static DjinniRecordHandle *(*s_py_callback_foo_listener_on_changes_record_returned)(DjinniObjectHandle * , int32_t, int32_t);
static DjinniString *(*s_py_callback_foo_listener_on_changes_string_optional_returned)(DjinniObjectHandle * , DjinniBoxedI32 *, float, DjinniString *, DjinniBinary *, int32_t, uint64_t);
static DjinniBoxedI32 *(*s_py_callback_foo_listener_on_changes_int_optional_returned)(DjinniObjectHandle * , DjinniBoxedI32 *, float, DjinniString *, DjinniBinary *, int32_t, uint64_t);
static void(*s_py_callback_foo_listener_cause_py_exception)(DjinniObjectHandle * , DjinniString *);
static void(*s_py_callback_foo_listener_cause_zero_division_error)(DjinniObjectHandle * );
static void(*s_py_callback_foo_listener___delete)(DjinniObjectHandle * );

std::shared_ptr<::testsuite::FooListener> DjinniWrapperFooListener::get(djinni::WrapperRef<DjinniWrapperFooListener> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void foo_listener___delete(DjinniObjectHandle * dh) {
    s_py_callback_foo_listener___delete(dh);
}
void foo_listener___wrapper_add_ref(DjinniWrapperFooListener * dh) {
    dh->ref_count.fetch_add(1);
}
void foo_listener___wrapper_dec_ref(DjinniWrapperFooListener * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperFooListener> DjinniWrapperFooListener::wrap(std::shared_ptr<::testsuite::FooListener> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperFooListener>(new DjinniWrapperFooListener{ std::move(obj) }, foo_listener___wrapper_dec_ref);
    return nullptr;
}

DjinniWrapperFooListener *  make_proxy_object_from_handle_cw__foo_listener(DjinniObjectHandle * c_ptr) {
    return new DjinniWrapperFooListener{std::make_shared<FooListenerPythonProxy>(c_ptr)};
}

DjinniObjectHandle * get_handle_from_proxy_object_cw__foo_listener(DjinniWrapperFooListener * dw) {
    FooListenerPythonProxy * cast_ptr = dynamic_cast<FooListenerPythonProxy * >(dw->wrapped_obj.get());
    if (!cast_ptr) { return nullptr; }
    else return cast_ptr->get_m_py_obj_handle();
}

bool equal_handles_cw__foo_listener(DjinniWrapperFooListener * dw1, DjinniWrapperFooListener * dw2) {
    return dw1->wrapped_obj == dw2->wrapped_obj;
}

DjinniObjectHandle * FooListenerPythonProxy::get_m_py_obj_handle() {
    return m_py_obj_handle;
}

FooListenerPythonProxy::FooListenerPythonProxy(DjinniObjectHandle * c_ptr) : m_py_obj_handle(c_ptr) {}

FooListenerPythonProxy::~FooListenerPythonProxy() {
    s_py_callback_foo_listener___delete(m_py_obj_handle);
}

void foo_listener_add_callback_on_string_change(DjinniString *(* ptr)(DjinniObjectHandle * , DjinniString *)) {
    s_py_callback_foo_listener_on_string_change = ptr;
}

void foo_listener_add_callback_get_private_int(int32_t(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_get_private_int = ptr;
}

void foo_listener_add_callback_on_changes_string_returned(DjinniString *(* ptr)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t)) {
    s_py_callback_foo_listener_on_changes_string_returned = ptr;
}

void foo_listener_add_callback_on_changes_binary_returned(DjinniBinary *(* ptr)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t)) {
    s_py_callback_foo_listener_on_changes_binary_returned = ptr;
}

void foo_listener_add_callback_on_changes_date_returned(uint64_t(* ptr)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t)) {
    s_py_callback_foo_listener_on_changes_date_returned = ptr;
}

void foo_listener_add_callback_on_changes_int_returned(int32_t(* ptr)(DjinniObjectHandle * , int32_t, float, DjinniString *, DjinniBinary *, bool, uint64_t)) {
    s_py_callback_foo_listener_on_changes_int_returned = ptr;
}

void foo_listener_add_callback_on_changes_record_returned(DjinniRecordHandle *(* ptr)(DjinniObjectHandle * , int32_t, int32_t)) {
    s_py_callback_foo_listener_on_changes_record_returned = ptr;
}

void foo_listener_add_callback_on_changes_string_optional_returned(DjinniString *(* ptr)(DjinniObjectHandle * , DjinniBoxedI32 *, float, DjinniString *, DjinniBinary *, int32_t, uint64_t)) {
    s_py_callback_foo_listener_on_changes_string_optional_returned = ptr;
}

void foo_listener_add_callback_on_changes_int_optional_returned(DjinniBoxedI32 *(* ptr)(DjinniObjectHandle * , DjinniBoxedI32 *, float, DjinniString *, DjinniBinary *, int32_t, uint64_t)) {
    s_py_callback_foo_listener_on_changes_int_optional_returned = ptr;
}

void foo_listener_add_callback_cause_py_exception(void(* ptr)(DjinniObjectHandle * , DjinniString *)) {
    s_py_callback_foo_listener_cause_py_exception = ptr;
}

void foo_listener_add_callback_cause_zero_division_error(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_cause_zero_division_error = ptr;
}

void foo_listener_add_callback___delete(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener___delete = ptr;
}

std::string FooListenerPythonProxy::on_string_change(const std::string & private_string) {
    auto _private_string = DjinniString::fromCpp(private_string);
    auto _ret = DjinniString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_foo_listener_on_string_change(m_py_obj_handle, _private_string.release())));
    djinni::cw_throw_if_pending();
    return _ret;
}

int32_t FooListenerPythonProxy::get_private_int() {
    auto _ret = s_py_callback_foo_listener_get_private_int(m_py_obj_handle);
    djinni::cw_throw_if_pending();
    return _ret;
}

std::string FooListenerPythonProxy::on_changes_string_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) {
    auto _s = DjinniString::fromCpp(s);
    auto _binar = DjinniBinary::fromCpp(binar);
    auto _ret = DjinniString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_foo_listener_on_changes_string_returned(m_py_obj_handle, i, f, _s.release(), _binar.release(), b, DjinniDate::fromCpp(d))));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::vector<uint8_t> FooListenerPythonProxy::on_changes_binary_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) {
    auto _s = DjinniString::fromCpp(s);
    auto _binar = DjinniBinary::fromCpp(binar);
    auto _ret = DjinniBinary::toCpp(std::unique_ptr<DjinniBinary>(s_py_callback_foo_listener_on_changes_binary_returned(m_py_obj_handle, i, f, _s.release(), _binar.release(), b, DjinniDate::fromCpp(d))));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::chrono::system_clock::time_point FooListenerPythonProxy::on_changes_date_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) {
    auto _s = DjinniString::fromCpp(s);
    auto _binar = DjinniBinary::fromCpp(binar);
    auto _ret = DjinniDate::toCpp(s_py_callback_foo_listener_on_changes_date_returned(m_py_obj_handle, i, f, _s.release(), _binar.release(), b, DjinniDate::fromCpp(d)));
    djinni::cw_throw_if_pending();
    return _ret;
}

int32_t FooListenerPythonProxy::on_changes_int_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) {
    auto _s = DjinniString::fromCpp(s);
    auto _binar = DjinniBinary::fromCpp(binar);
    auto _ret = s_py_callback_foo_listener_on_changes_int_returned(m_py_obj_handle, i, f, _s.release(), _binar.release(), b, DjinniDate::fromCpp(d));
    djinni::cw_throw_if_pending();
    return _ret;
}

::testsuite::FooSomeOtherRecord FooListenerPythonProxy::on_changes_record_returned(int32_t n1, int32_t n2) {
    auto _ret = DjinniFooSomeOtherRecord::toCpp(djinni::Handle<DjinniRecordHandle>(s_py_callback_foo_listener_on_changes_record_returned(m_py_obj_handle, n1, n2), foo_some_other_record___delete));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::experimental::optional<std::string> FooListenerPythonProxy::on_changes_string_optional_returned(std::experimental::optional<int32_t> i, float f, const std::experimental::optional<std::string> & s, const std::vector<uint8_t> & binar, int32_t b, const std::chrono::system_clock::time_point & d) {
    auto _i = DjinniBoxedI32::fromCpp(i);
    auto _s = DjinniOptionalString::fromCpp(s);
    auto _binar = DjinniBinary::fromCpp(binar);
    auto _ret = DjinniOptionalString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_foo_listener_on_changes_string_optional_returned(m_py_obj_handle, _i.release(), f, _s.release(), _binar.release(), b, DjinniDate::fromCpp(d))));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::experimental::optional<int32_t> FooListenerPythonProxy::on_changes_int_optional_returned(std::experimental::optional<int32_t> i, float f, const std::experimental::optional<std::string> & s, const std::vector<uint8_t> & binar, int32_t b, const std::chrono::system_clock::time_point & d) {
    auto _i = DjinniBoxedI32::fromCpp(i);
    auto _s = DjinniOptionalString::fromCpp(s);
    auto _binar = DjinniBinary::fromCpp(binar);
    auto _ret = DjinniBoxedI32::toCpp(std::unique_ptr<DjinniBoxedI32>(s_py_callback_foo_listener_on_changes_int_optional_returned(m_py_obj_handle, _i.release(), f, _s.release(), _binar.release(), b, DjinniDate::fromCpp(d))));
    djinni::cw_throw_if_pending();
    return _ret;
}

void FooListenerPythonProxy::cause_py_exception(const std::string & exception_arg) {
    auto _exception_arg = DjinniString::fromCpp(exception_arg);
    s_py_callback_foo_listener_cause_py_exception(m_py_obj_handle, _exception_arg.release());
    djinni::cw_throw_if_pending();
}

void FooListenerPythonProxy::cause_zero_division_error() {
    s_py_callback_foo_listener_cause_zero_division_error(m_py_obj_handle);
    djinni::cw_throw_if_pending();
}
