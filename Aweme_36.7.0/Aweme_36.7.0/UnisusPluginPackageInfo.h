@interface UnisusPluginPackageInfo : NSObject {
    struct optional<uni::service::plugin::PluginPackageInfo> { union { char __null_state_; struct PluginPackageInfo { unsigned long long id_value; struct version_t { unsigned int value; } version; unsigned char type; unsigned short techType; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } urls; struct optional<uni::service::plugin::XXHash32> { union { char __null_state_; struct XXHash32 { unsigned int value; } __val_; } ; BOOL __engaged_; } checksum; } __val_; } ; BOOL __engaged_; } info_;
}

+ (id)pluginId:(id)a0 version:(id)a1 type:(unsigned int)a2 urls:(id)a3 checksum:(id)a4;
+ (id)pluginId:(id)a0 version:(id)a1 type:(unsigned int)a2 urls:(id)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)info;

@end
