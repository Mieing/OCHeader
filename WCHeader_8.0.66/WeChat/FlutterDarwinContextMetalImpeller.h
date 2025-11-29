@interface FlutterDarwinContextMetalImpeller : NSObject

@property (readonly, nonatomic) struct shared_ptr<impeller::ContextMTL> { struct ContextMTL *__ptr_; struct __shared_weak_count *__cntrl_; } context;
@property (readonly, nonatomic) struct CFRef<__CVMetalTextureCache *> { struct __CVMetalTextureCache *instance_; } textureCache;

- (id)init:(const struct Flags { BOOL x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; } *)a0 gpuDisabledSyncSwitch:(const void *)a1;
- (id)createExternalTextureWithIdentifier:(long long)a0 texture:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
