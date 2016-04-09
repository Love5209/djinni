// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "client_interface.hpp"

#include "cw__client_interface.hpp"
#include "cw__client_interface.hpp"
#include "dh__client_returned_record.hpp"
#include <experimental/optional>
#include <vector>

static DjinniRecordHandle *(*s_py_callback_client_interface_get_record)(DjinniObjectHandle * , int64_t, DjinniString *, DjinniString *);
static double(*s_py_callback_client_interface_identifier_check)(DjinniObjectHandle * , DjinniBinary *, int32_t, int64_t);
static DjinniString *(*s_py_callback_client_interface_return_str)(DjinniObjectHandle * );
static DjinniString *(*s_py_callback_client_interface_meth_taking_interface)(DjinniObjectHandle * , DjinniWrapperClientInterface *);
static DjinniString *(*s_py_callback_client_interface_meth_taking_optional_interface)(DjinniObjectHandle * , DjinniWrapperClientInterface *);
static void(*s_py_callback_client_interface___delete)(DjinniObjectHandle * );

std::shared_ptr<::testsuite::ClientInterface> DjinniWrapperClientInterface::get(djinni::WrapperRef<DjinniWrapperClientInterface> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void client_interface___delete(DjinniObjectHandle * dh) {
    s_py_callback_client_interface___delete(dh);
}
void client_interface___wrapper_add_ref(DjinniWrapperClientInterface * dh) {
    dh->ref_count.fetch_add(1);
}
void client_interface___wrapper_dec_ref(DjinniWrapperClientInterface * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperClientInterface> DjinniWrapperClientInterface::wrap(std::shared_ptr<::testsuite::ClientInterface> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperClientInterface>(new DjinniWrapperClientInterface{ std::move(obj) }, client_interface___wrapper_dec_ref);
    return nullptr;
}

DjinniWrapperClientInterface *  make_proxy_object_from_handle_cw__client_interface(DjinniObjectHandle * c_ptr) {
    return new DjinniWrapperClientInterface{std::make_shared<ClientInterfacePythonProxy>(c_ptr)};
}

DjinniObjectHandle * get_handle_from_proxy_object_cw__client_interface(DjinniWrapperClientInterface * dw) {
    ClientInterfacePythonProxy * cast_ptr = dynamic_cast<ClientInterfacePythonProxy * >(dw->wrapped_obj.get());
    if (!cast_ptr) { return nullptr; }
    else return cast_ptr->get_m_py_obj_handle();
}

bool equal_handles_cw__client_interface(DjinniWrapperClientInterface * dw1, DjinniWrapperClientInterface * dw2) {
    return dw1->wrapped_obj == dw2->wrapped_obj;
}

DjinniObjectHandle * ClientInterfacePythonProxy::get_m_py_obj_handle() {
    return m_py_obj_handle;
}

ClientInterfacePythonProxy::ClientInterfacePythonProxy(DjinniObjectHandle * c_ptr) : m_py_obj_handle(c_ptr) {}

ClientInterfacePythonProxy::~ClientInterfacePythonProxy() {
    s_py_callback_client_interface___delete(m_py_obj_handle);
}

void client_interface_add_callback_get_record(DjinniRecordHandle *(* ptr)(DjinniObjectHandle * , int64_t, DjinniString *, DjinniString *)) {
    s_py_callback_client_interface_get_record = ptr;
}

void client_interface_add_callback_identifier_check(double(* ptr)(DjinniObjectHandle * , DjinniBinary *, int32_t, int64_t)) {
    s_py_callback_client_interface_identifier_check = ptr;
}

void client_interface_add_callback_return_str(DjinniString *(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_client_interface_return_str = ptr;
}

void client_interface_add_callback_meth_taking_interface(DjinniString *(* ptr)(DjinniObjectHandle * , DjinniWrapperClientInterface *)) {
    s_py_callback_client_interface_meth_taking_interface = ptr;
}

void client_interface_add_callback_meth_taking_optional_interface(DjinniString *(* ptr)(DjinniObjectHandle * , DjinniWrapperClientInterface *)) {
    s_py_callback_client_interface_meth_taking_optional_interface = ptr;
}

void client_interface_add_callback___delete(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_client_interface___delete = ptr;
}

::testsuite::ClientReturnedRecord ClientInterfacePythonProxy::get_record(int64_t record_id, const std::string & utf8string, const std::experimental::optional<std::string> & misc) {
    auto _utf8string = DjinniString::fromCpp(utf8string);
    auto _misc = DjinniOptionalString::fromCpp(misc);
    auto _ret = DjinniClientReturnedRecord::toCpp(djinni::Handle<DjinniRecordHandle>(s_py_callback_client_interface_get_record(m_py_obj_handle, record_id, _utf8string.release(), _misc.release()), client_returned_record___delete));
    djinni::cw_throw_if_pending();
    return _ret;
}

double ClientInterfacePythonProxy::identifier_check(const std::vector<uint8_t> & data, int32_t r, int64_t jret) {
    auto _data = DjinniBinary::fromCpp(data);
    auto _ret = s_py_callback_client_interface_identifier_check(m_py_obj_handle, _data.release(), r, jret);
    djinni::cw_throw_if_pending();
    return _ret;
}

std::string ClientInterfacePythonProxy::return_str() {
    auto _ret = DjinniString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_client_interface_return_str(m_py_obj_handle)));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::string ClientInterfacePythonProxy::meth_taking_interface(const std::shared_ptr<::testsuite::ClientInterface> & i) {
    auto _i = DjinniWrapperClientInterface::wrap(std::move(i));
    auto _ret = DjinniString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_client_interface_meth_taking_interface(m_py_obj_handle, _i.release())));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::string ClientInterfacePythonProxy::meth_taking_optional_interface(const std::shared_ptr<::testsuite::ClientInterface> & i) {
    auto _i = DjinniWrapperClientInterface::wrap(std::move(i));
    auto _ret = DjinniString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_client_interface_meth_taking_optional_interface(m_py_obj_handle, _i.release())));
    djinni::cw_throw_if_pending();
    return _ret;
}
