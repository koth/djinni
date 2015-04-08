// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#include "NativeMapDateRecord.hpp"  // my header
#include "HDate.hpp"
#include "HMap.hpp"
#include "HString.hpp"

namespace djinni_generated {

jobject NativeMapDateRecord::toJava(JNIEnv* jniEnv, MapDateRecord c) {
    djinni::LocalRef<jobject> j_dates_by_id(jniEnv, ::djinni::HMap<::djinni::HString, ::djinni::HDate>::toJava(jniEnv, c.dates_by_id));
    const auto & data = djinni::JniClass<::djinni_generated::NativeMapDateRecord>::get();
    jobject r = jniEnv->NewObject(data.clazz.get(), data.jconstructor, j_dates_by_id.get());
    djinni::jniExceptionCheck(jniEnv);
    return r;
}

MapDateRecord NativeMapDateRecord::fromJava(JNIEnv* jniEnv, jobject j) {
    assert(j != nullptr);
    const auto & data = djinni::JniClass<::djinni_generated::NativeMapDateRecord>::get();
    return MapDateRecord(
        ::djinni::HMap<::djinni::HString, ::djinni::HDate>::fromJava(jniEnv, djinni::LocalRef<jobject>(jniEnv, jniEnv->GetObjectField(j, data.field_mDatesById)).get()));
}

}  // namespace djinni_generated