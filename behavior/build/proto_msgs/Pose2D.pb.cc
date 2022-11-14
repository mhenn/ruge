// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Pose2D.proto

#include "Pose2D.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_Time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_Time_2eproto;
namespace llsf_msgs {
class Pose2DDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Pose2D> _instance;
} _Pose2D_default_instance_;
}  // namespace llsf_msgs
static void InitDefaultsscc_info_Pose2D_Pose2D_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::llsf_msgs::_Pose2D_default_instance_;
    new (ptr) ::llsf_msgs::Pose2D();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::llsf_msgs::Pose2D::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Pose2D_Pose2D_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Pose2D_Pose2D_2eproto}, {
      &scc_info_Time_Time_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Pose2D_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Pose2D_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Pose2D_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Pose2D_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::llsf_msgs::Pose2D, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::llsf_msgs::Pose2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::llsf_msgs::Pose2D, timestamp_),
  PROTOBUF_FIELD_OFFSET(::llsf_msgs::Pose2D, x_),
  PROTOBUF_FIELD_OFFSET(::llsf_msgs::Pose2D, y_),
  PROTOBUF_FIELD_OFFSET(::llsf_msgs::Pose2D, ori_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::llsf_msgs::Pose2D)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::llsf_msgs::_Pose2D_default_instance_),
};

const char descriptor_table_protodef_Pose2D_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014Pose2D.proto\022\tllsf_msgs\032\nTime.proto\"O\n"
  "\006Pose2D\022\"\n\ttimestamp\030\001 \002(\0132\017.llsf_msgs.T"
  "ime\022\t\n\001x\030\002 \002(\002\022\t\n\001y\030\003 \002(\002\022\013\n\003ori\030\004 \002(\002B/"
  "\n\037org.robocup_logistics.llsf_msgsB\014Pose2"
  "DProtos"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Pose2D_2eproto_deps[1] = {
  &::descriptor_table_Time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Pose2D_2eproto_sccs[1] = {
  &scc_info_Pose2D_Pose2D_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Pose2D_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Pose2D_2eproto = {
  false, false, descriptor_table_protodef_Pose2D_2eproto, "Pose2D.proto", 167,
  &descriptor_table_Pose2D_2eproto_once, descriptor_table_Pose2D_2eproto_sccs, descriptor_table_Pose2D_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Pose2D_2eproto::offsets,
  file_level_metadata_Pose2D_2eproto, 1, file_level_enum_descriptors_Pose2D_2eproto, file_level_service_descriptors_Pose2D_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Pose2D_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Pose2D_2eproto)), true);
namespace llsf_msgs {

// ===================================================================

void Pose2D::InitAsDefaultInstance() {
  ::llsf_msgs::_Pose2D_default_instance_._instance.get_mutable()->timestamp_ = const_cast< ::llsf_msgs::Time*>(
      ::llsf_msgs::Time::internal_default_instance());
}
class Pose2D::_Internal {
 public:
  using HasBits = decltype(std::declval<Pose2D>()._has_bits_);
  static const ::llsf_msgs::Time& timestamp(const Pose2D* msg);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_ori(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000f) ^ 0x0000000f) != 0;
  }
};

const ::llsf_msgs::Time&
Pose2D::_Internal::timestamp(const Pose2D* msg) {
  return *msg->timestamp_;
}
void Pose2D::clear_timestamp() {
  if (timestamp_ != nullptr) timestamp_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
Pose2D::Pose2D(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:llsf_msgs.Pose2D)
}
Pose2D::Pose2D(const Pose2D& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_timestamp()) {
    timestamp_ = new ::llsf_msgs::Time(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&ori_) -
    reinterpret_cast<char*>(&x_)) + sizeof(ori_));
  // @@protoc_insertion_point(copy_constructor:llsf_msgs.Pose2D)
}

void Pose2D::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Pose2D_Pose2D_2eproto.base);
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ori_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(ori_));
}

Pose2D::~Pose2D() {
  // @@protoc_insertion_point(destructor:llsf_msgs.Pose2D)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Pose2D::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete timestamp_;
}

void Pose2D::ArenaDtor(void* object) {
  Pose2D* _this = reinterpret_cast< Pose2D* >(object);
  (void)_this;
}
void Pose2D::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Pose2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Pose2D& Pose2D::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Pose2D_Pose2D_2eproto.base);
  return *internal_default_instance();
}


void Pose2D::Clear() {
// @@protoc_insertion_point(message_clear_start:llsf_msgs.Pose2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(timestamp_ != nullptr);
    timestamp_->Clear();
  }
  if (cached_has_bits & 0x0000000eu) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&ori_) -
        reinterpret_cast<char*>(&x_)) + sizeof(ori_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Pose2D::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .llsf_msgs.Time timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required float x = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_x(&has_bits);
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float y = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_y(&has_bits);
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float ori = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          _Internal::set_has_ori(&has_bits);
          ori_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Pose2D::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:llsf_msgs.Pose2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .llsf_msgs.Time timestamp = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::timestamp(this), target, stream);
  }

  // required float x = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_x(), target);
  }

  // required float y = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_y(), target);
  }

  // required float ori = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_ori(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:llsf_msgs.Pose2D)
  return target;
}

size_t Pose2D::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:llsf_msgs.Pose2D)
  size_t total_size = 0;

  if (_internal_has_timestamp()) {
    // required .llsf_msgs.Time timestamp = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  if (_internal_has_x()) {
    // required float x = 2;
    total_size += 1 + 4;
  }

  if (_internal_has_y()) {
    // required float y = 3;
    total_size += 1 + 4;
  }

  if (_internal_has_ori()) {
    // required float ori = 4;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t Pose2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:llsf_msgs.Pose2D)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required .llsf_msgs.Time timestamp = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);

    // required float x = 2;
    total_size += 1 + 4;

    // required float y = 3;
    total_size += 1 + 4;

    // required float ori = 4;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Pose2D::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:llsf_msgs.Pose2D)
  GOOGLE_DCHECK_NE(&from, this);
  const Pose2D* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Pose2D>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:llsf_msgs.Pose2D)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:llsf_msgs.Pose2D)
    MergeFrom(*source);
  }
}

void Pose2D::MergeFrom(const Pose2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:llsf_msgs.Pose2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_timestamp()->::llsf_msgs::Time::MergeFrom(from._internal_timestamp());
    }
    if (cached_has_bits & 0x00000002u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000004u) {
      y_ = from.y_;
    }
    if (cached_has_bits & 0x00000008u) {
      ori_ = from.ori_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Pose2D::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:llsf_msgs.Pose2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose2D::CopyFrom(const Pose2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:llsf_msgs.Pose2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose2D::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_timestamp()) {
    if (!timestamp_->IsInitialized()) return false;
  }
  return true;
}

void Pose2D::InternalSwap(Pose2D* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Pose2D, ori_)
      + sizeof(Pose2D::ori_)
      - PROTOBUF_FIELD_OFFSET(Pose2D, timestamp_)>(
          reinterpret_cast<char*>(&timestamp_),
          reinterpret_cast<char*>(&other->timestamp_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Pose2D::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace llsf_msgs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::llsf_msgs::Pose2D* Arena::CreateMaybeMessage< ::llsf_msgs::Pose2D >(Arena* arena) {
  return Arena::CreateMessageInternal< ::llsf_msgs::Pose2D >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
