@protocol MTLCommandQueue, MTLDevice;

@interface FlutterDarwinContextMetalSkia : NSObject {
    struct CFRef<__CVMetalTextureCache *> { struct __CVMetalTextureCache *instance_; } _textureCache;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) struct sk_sp<GrDirectContext> { struct GrDirectContext *fPtr; } mainContext;
@property (readonly, nonatomic) struct sk_sp<GrDirectContext> { struct GrDirectContext *fPtr; } resourceContext;
@property (readonly, nonatomic) struct __CVMetalTextureCache { } *textureCache;

+ (struct sk_sp<GrDirectContext> { struct GrDirectContext *x0; })createGrContext:(id)a0 commandQueue:(id)a1;

- (id)initWithDefaultMTLDevice;
- (id)initWithMTLDevice:(id)a0 commandQueue:(id)a1;
- (struct sk_sp<GrDirectContext> { struct GrDirectContext *x0; })createGrContext;
- (id)createExternalTextureWithIdentifier:(long long)a0 texture:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
