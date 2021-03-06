// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pidb.proto

#include "pidb.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace pidb {
class PiDBRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PiDBRequest>
      _instance;
} _PiDBRequest_default_instance_;
class PiDBResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PiDBResponse>
      _instance;
} _PiDBResponse_default_instance_;
}  // namespace pidb
namespace protobuf_pidb_2eproto {
static void InitDefaultsPiDBRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pidb::_PiDBRequest_default_instance_;
    new (ptr) ::pidb::PiDBRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pidb::PiDBRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PiDBRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPiDBRequest}, {}};

static void InitDefaultsPiDBResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pidb::_PiDBResponse_default_instance_;
    new (ptr) ::pidb::PiDBResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pidb::PiDBResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PiDBResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPiDBResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PiDBRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_PiDBResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::ServiceDescriptor* file_level_service_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBRequest, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBRequest, value_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBResponse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBResponse, success_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBResponse, old_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBResponse, new_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pidb::PiDBResponse, redirect_),
  3,
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::pidb::PiDBRequest)},
  { 9, 18, sizeof(::pidb::PiDBResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::pidb::_PiDBRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::pidb::_PiDBResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "pidb.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, file_level_service_descriptors);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\npidb.proto\022\004pidb\")\n\013PiDBRequest\022\013\n\003key"
      "\030\001 \002(\t\022\r\n\005value\030\002 \001(\t\"W\n\014PiDBResponse\022\017\n"
      "\007success\030\001 \002(\010\022\021\n\told_value\030\002 \001(\t\022\021\n\tnew"
      "_value\030\003 \001(\t\022\020\n\010redirect\030\004 \001(\t2l\n\013PiDBSe"
      "rvice\022.\n\005write\022\021.pidb.PiDBRequest\032\022.pidb"
      ".PiDBResponse\022-\n\004read\022\021.pidb.PiDBRequest"
      "\032\022.pidb.PiDBResponseB\003\200\001\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 265);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pidb.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_pidb_2eproto
namespace pidb {

// ===================================================================

void PiDBRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PiDBRequest::kKeyFieldNumber;
const int PiDBRequest::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PiDBRequest::PiDBRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_pidb_2eproto::scc_info_PiDBRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:pidb.PiDBRequest)
}
PiDBRequest::PiDBRequest(const PiDBRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_key()) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:pidb.PiDBRequest)
}

void PiDBRequest::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PiDBRequest::~PiDBRequest() {
  // @@protoc_insertion_point(destructor:pidb.PiDBRequest)
  SharedDtor();
}

void PiDBRequest::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PiDBRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PiDBRequest::descriptor() {
  ::protobuf_pidb_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pidb_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PiDBRequest& PiDBRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_pidb_2eproto::scc_info_PiDBRequest.base);
  return *internal_default_instance();
}


void PiDBRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:pidb.PiDBRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      key_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      value_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PiDBRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pidb.PiDBRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->key().data(), static_cast<int>(this->key().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pidb.PiDBRequest.key");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->value().data(), static_cast<int>(this->value().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pidb.PiDBRequest.value");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pidb.PiDBRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pidb.PiDBRequest)
  return false;
#undef DO_
}

void PiDBRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pidb.PiDBRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string key = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBRequest.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // optional string value = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBRequest.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pidb.PiDBRequest)
}

::google::protobuf::uint8* PiDBRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pidb.PiDBRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string key = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBRequest.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // optional string value = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBRequest.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pidb.PiDBRequest)
  return target;
}

size_t PiDBRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pidb.PiDBRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string key = 1;
  if (has_key()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }
  // optional string value = 2;
  if (has_value()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PiDBRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pidb.PiDBRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PiDBRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PiDBRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pidb.PiDBRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pidb.PiDBRequest)
    MergeFrom(*source);
  }
}

void PiDBRequest::MergeFrom(const PiDBRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pidb.PiDBRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_key();
      key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
}

void PiDBRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pidb.PiDBRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PiDBRequest::CopyFrom(const PiDBRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pidb.PiDBRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PiDBRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void PiDBRequest::Swap(PiDBRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PiDBRequest::InternalSwap(PiDBRequest* other) {
  using std::swap;
  key_.Swap(&other->key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  value_.Swap(&other->value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PiDBRequest::GetMetadata() const {
  protobuf_pidb_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pidb_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void PiDBResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PiDBResponse::kSuccessFieldNumber;
const int PiDBResponse::kOldValueFieldNumber;
const int PiDBResponse::kNewValueFieldNumber;
const int PiDBResponse::kRedirectFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PiDBResponse::PiDBResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_pidb_2eproto::scc_info_PiDBResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:pidb.PiDBResponse)
}
PiDBResponse::PiDBResponse(const PiDBResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  old_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_old_value()) {
    old_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.old_value_);
  }
  new_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_new_value()) {
    new_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.new_value_);
  }
  redirect_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_redirect()) {
    redirect_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.redirect_);
  }
  success_ = from.success_;
  // @@protoc_insertion_point(copy_constructor:pidb.PiDBResponse)
}

void PiDBResponse::SharedCtor() {
  old_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  new_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  redirect_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  success_ = false;
}

PiDBResponse::~PiDBResponse() {
  // @@protoc_insertion_point(destructor:pidb.PiDBResponse)
  SharedDtor();
}

void PiDBResponse::SharedDtor() {
  old_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  new_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  redirect_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PiDBResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PiDBResponse::descriptor() {
  ::protobuf_pidb_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pidb_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PiDBResponse& PiDBResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_pidb_2eproto::scc_info_PiDBResponse.base);
  return *internal_default_instance();
}


void PiDBResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:pidb.PiDBResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      old_value_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      new_value_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      redirect_.ClearNonDefaultToEmptyNoArena();
    }
  }
  success_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PiDBResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pidb.PiDBResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool success = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_success();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string old_value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_old_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->old_value().data(), static_cast<int>(this->old_value().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pidb.PiDBResponse.old_value");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string new_value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_new_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->new_value().data(), static_cast<int>(this->new_value().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pidb.PiDBResponse.new_value");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string redirect = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_redirect()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->redirect().data(), static_cast<int>(this->redirect().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pidb.PiDBResponse.redirect");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pidb.PiDBResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pidb.PiDBResponse)
  return false;
#undef DO_
}

void PiDBResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pidb.PiDBResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool success = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->success(), output);
  }

  // optional string old_value = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->old_value().data(), static_cast<int>(this->old_value().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBResponse.old_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->old_value(), output);
  }

  // optional string new_value = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->new_value().data(), static_cast<int>(this->new_value().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBResponse.new_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->new_value(), output);
  }

  // optional string redirect = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->redirect().data(), static_cast<int>(this->redirect().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBResponse.redirect");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->redirect(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pidb.PiDBResponse)
}

::google::protobuf::uint8* PiDBResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pidb.PiDBResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool success = 1;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->success(), target);
  }

  // optional string old_value = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->old_value().data(), static_cast<int>(this->old_value().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBResponse.old_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->old_value(), target);
  }

  // optional string new_value = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->new_value().data(), static_cast<int>(this->new_value().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBResponse.new_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->new_value(), target);
  }

  // optional string redirect = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->redirect().data(), static_cast<int>(this->redirect().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pidb.PiDBResponse.redirect");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->redirect(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pidb.PiDBResponse)
  return target;
}

size_t PiDBResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pidb.PiDBResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required bool success = 1;
  if (has_success()) {
    total_size += 1 + 1;
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string old_value = 2;
    if (has_old_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->old_value());
    }

    // optional string new_value = 3;
    if (has_new_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->new_value());
    }

    // optional string redirect = 4;
    if (has_redirect()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->redirect());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PiDBResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pidb.PiDBResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const PiDBResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PiDBResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pidb.PiDBResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pidb.PiDBResponse)
    MergeFrom(*source);
  }
}

void PiDBResponse::MergeFrom(const PiDBResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pidb.PiDBResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_old_value();
      old_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.old_value_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_new_value();
      new_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.new_value_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_redirect();
      redirect_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.redirect_);
    }
    if (cached_has_bits & 0x00000008u) {
      success_ = from.success_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PiDBResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pidb.PiDBResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PiDBResponse::CopyFrom(const PiDBResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pidb.PiDBResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PiDBResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000008) != 0x00000008) return false;
  return true;
}

void PiDBResponse::Swap(PiDBResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PiDBResponse::InternalSwap(PiDBResponse* other) {
  using std::swap;
  old_value_.Swap(&other->old_value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  new_value_.Swap(&other->new_value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  redirect_.Swap(&other->redirect_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(success_, other->success_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PiDBResponse::GetMetadata() const {
  protobuf_pidb_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pidb_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

PiDBService::~PiDBService() {}

const ::google::protobuf::ServiceDescriptor* PiDBService::descriptor() {
  protobuf_pidb_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_pidb_2eproto::file_level_service_descriptors[0];
}

const ::google::protobuf::ServiceDescriptor* PiDBService::GetDescriptor() {
  return descriptor();
}

void PiDBService::write(::google::protobuf::RpcController* controller,
                         const ::pidb::PiDBRequest*,
                         ::pidb::PiDBResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method write() not implemented.");
  done->Run();
}

void PiDBService::read(::google::protobuf::RpcController* controller,
                         const ::pidb::PiDBRequest*,
                         ::pidb::PiDBResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method read() not implemented.");
  done->Run();
}

void PiDBService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), protobuf_pidb_2eproto::file_level_service_descriptors[0]);
  switch(method->index()) {
    case 0:
      write(controller,
             ::google::protobuf::down_cast<const ::pidb::PiDBRequest*>(request),
             ::google::protobuf::down_cast< ::pidb::PiDBResponse*>(response),
             done);
      break;
    case 1:
      read(controller,
             ::google::protobuf::down_cast<const ::pidb::PiDBRequest*>(request),
             ::google::protobuf::down_cast< ::pidb::PiDBResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& PiDBService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::pidb::PiDBRequest::default_instance();
    case 1:
      return ::pidb::PiDBRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& PiDBService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::pidb::PiDBResponse::default_instance();
    case 1:
      return ::pidb::PiDBResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

PiDBService_Stub::PiDBService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
PiDBService_Stub::PiDBService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
PiDBService_Stub::~PiDBService_Stub() {
  if (owns_channel_) delete channel_;
}

void PiDBService_Stub::write(::google::protobuf::RpcController* controller,
                              const ::pidb::PiDBRequest* request,
                              ::pidb::PiDBResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void PiDBService_Stub::read(::google::protobuf::RpcController* controller,
                              const ::pidb::PiDBRequest* request,
                              ::pidb::PiDBResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace pidb
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::pidb::PiDBRequest* Arena::CreateMaybeMessage< ::pidb::PiDBRequest >(Arena* arena) {
  return Arena::CreateInternal< ::pidb::PiDBRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::pidb::PiDBResponse* Arena::CreateMaybeMessage< ::pidb::PiDBResponse >(Arena* arena) {
  return Arena::CreateInternal< ::pidb::PiDBResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
