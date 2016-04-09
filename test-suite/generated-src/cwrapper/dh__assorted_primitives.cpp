// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "assorted_primitives.hpp"

#include "dh__assorted_primitives.hpp"
#include <experimental/optional>

static void(*s_py_callback_assorted_primitives___delete)(DjinniRecordHandle * );
void assorted_primitives_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_assorted_primitives___delete = ptr;
}

void assorted_primitives___delete(DjinniRecordHandle * drh) {
    s_py_callback_assorted_primitives___delete(drh);
}
void optional_assorted_primitives___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_assorted_primitives___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static bool ( * s_py_callback_assorted_primitives_get_assorted_primitives_f1)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f1(bool( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f1 = ptr;
}

static int8_t ( * s_py_callback_assorted_primitives_get_assorted_primitives_f2)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f2(int8_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f2 = ptr;
}

static int16_t ( * s_py_callback_assorted_primitives_get_assorted_primitives_f3)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f3(int16_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f3 = ptr;
}

static int32_t ( * s_py_callback_assorted_primitives_get_assorted_primitives_f4)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f4(int32_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f4 = ptr;
}

static int64_t ( * s_py_callback_assorted_primitives_get_assorted_primitives_f5)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f5(int64_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f5 = ptr;
}

static float ( * s_py_callback_assorted_primitives_get_assorted_primitives_f6)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f6(float( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f6 = ptr;
}

static double ( * s_py_callback_assorted_primitives_get_assorted_primitives_f7)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f7(double( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f7 = ptr;
}

static DjinniBoxedBool * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f8)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f8(DjinniBoxedBool *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f8 = ptr;
}

static DjinniBoxedI8 * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f9)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f9(DjinniBoxedI8 *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f9 = ptr;
}

static DjinniBoxedI16 * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f10)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f10(DjinniBoxedI16 *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f10 = ptr;
}

static DjinniBoxedI32 * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f11)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f11(DjinniBoxedI32 *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f11 = ptr;
}

static DjinniBoxedI64 * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f12)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f12(DjinniBoxedI64 *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f12 = ptr;
}

static DjinniBoxedF32 * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f13)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f13(DjinniBoxedF32 *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f13 = ptr;
}

static DjinniBoxedF64 * ( * s_py_callback_assorted_primitives_get_assorted_primitives_f14)(DjinniRecordHandle *);

void assorted_primitives_add_callback_get_assorted_primitives_f14(DjinniBoxedF64 *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_assorted_primitives_get_assorted_primitives_f14 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_assorted_primitives_python_create_assorted_primitives)(bool,int8_t,int16_t,int32_t,int64_t,float,double,DjinniBoxedBool *,DjinniBoxedI8 *,DjinniBoxedI16 *,DjinniBoxedI32 *,DjinniBoxedI64 *,DjinniBoxedF32 *,DjinniBoxedF64 *);

void assorted_primitives_add_callback_python_create_assorted_primitives(DjinniRecordHandle *( * ptr)(bool,int8_t,int16_t,int32_t,int64_t,float,double,DjinniBoxedBool *,DjinniBoxedI8 *,DjinniBoxedI16 *,DjinniBoxedI32 *,DjinniBoxedI64 *,DjinniBoxedF32 *,DjinniBoxedF64 *)) {
    s_py_callback_assorted_primitives_python_create_assorted_primitives = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniAssortedPrimitives::fromCpp(const ::testsuite::AssortedPrimitives& dr) {
    auto  _field_o_b = DjinniBoxedBool::fromCpp(dr.o_b);
    auto  _field_o_eight = DjinniBoxedI8::fromCpp(dr.o_eight);
    auto  _field_o_sixteen = DjinniBoxedI16::fromCpp(dr.o_sixteen);
    auto  _field_o_thirtytwo = DjinniBoxedI32::fromCpp(dr.o_thirtytwo);
    auto  _field_o_sixtyfour = DjinniBoxedI64::fromCpp(dr.o_sixtyfour);
    auto  _field_o_fthirtytwo = DjinniBoxedF32::fromCpp(dr.o_fthirtytwo);
    auto  _field_o_fsixtyfour = DjinniBoxedF64::fromCpp(dr.o_fsixtyfour);

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_assorted_primitives_python_create_assorted_primitives(
            dr.b,
            dr.eight,
            dr.sixteen,
            dr.thirtytwo,
            dr.sixtyfour,
            dr.fthirtytwo,
            dr.fsixtyfour,
            _field_o_b.release(),
            _field_o_eight.release(),
            _field_o_sixteen.release(),
            _field_o_thirtytwo.release(),
            _field_o_sixtyfour.release(),
            _field_o_fthirtytwo.release(),
            _field_o_fsixtyfour.release()),
        assorted_primitives___delete);
    return _aux;
}

::testsuite::AssortedPrimitives DjinniAssortedPrimitives::toCpp(djinni::Handle<DjinniRecordHandle> dh) {
    std::unique_ptr<DjinniBoxedBool> _field_o_b(s_py_callback_assorted_primitives_get_assorted_primitives_f8(dh.get()));
    std::unique_ptr<DjinniBoxedI8> _field_o_eight(s_py_callback_assorted_primitives_get_assorted_primitives_f9(dh.get()));
    std::unique_ptr<DjinniBoxedI16> _field_o_sixteen(s_py_callback_assorted_primitives_get_assorted_primitives_f10(dh.get()));
    std::unique_ptr<DjinniBoxedI32> _field_o_thirtytwo(s_py_callback_assorted_primitives_get_assorted_primitives_f11(dh.get()));
    std::unique_ptr<DjinniBoxedI64> _field_o_sixtyfour(s_py_callback_assorted_primitives_get_assorted_primitives_f12(dh.get()));
    std::unique_ptr<DjinniBoxedF32> _field_o_fthirtytwo(s_py_callback_assorted_primitives_get_assorted_primitives_f13(dh.get()));
    std::unique_ptr<DjinniBoxedF64> _field_o_fsixtyfour(s_py_callback_assorted_primitives_get_assorted_primitives_f14(dh.get()));

    auto _aux = ::testsuite::AssortedPrimitives(
        s_py_callback_assorted_primitives_get_assorted_primitives_f1(dh.get()),
        s_py_callback_assorted_primitives_get_assorted_primitives_f2(dh.get()),
        s_py_callback_assorted_primitives_get_assorted_primitives_f3(dh.get()),
        s_py_callback_assorted_primitives_get_assorted_primitives_f4(dh.get()),
        s_py_callback_assorted_primitives_get_assorted_primitives_f5(dh.get()),
        s_py_callback_assorted_primitives_get_assorted_primitives_f6(dh.get()),
        s_py_callback_assorted_primitives_get_assorted_primitives_f7(dh.get()),
        DjinniBoxedBool::toCpp(std::move( _field_o_b)),
        DjinniBoxedI8::toCpp(std::move( _field_o_eight)),
        DjinniBoxedI16::toCpp(std::move( _field_o_sixteen)),
        DjinniBoxedI32::toCpp(std::move( _field_o_thirtytwo)),
        DjinniBoxedI64::toCpp(std::move( _field_o_sixtyfour)),
        DjinniBoxedF32::toCpp(std::move( _field_o_fthirtytwo)),
        DjinniBoxedF64::toCpp(std::move( _field_o_fsixtyfour)));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniAssortedPrimitives::fromCpp(std::experimental::optional<::testsuite::AssortedPrimitives> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniAssortedPrimitives::fromCpp(std::move(* dc)), optional_assorted_primitives___delete);
}

std::experimental::optional<::testsuite::AssortedPrimitives>DjinniAssortedPrimitives::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::testsuite::AssortedPrimitives>(DjinniAssortedPrimitives::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), assorted_primitives___delete)));
    }
    return std::experimental::nullopt;
}

