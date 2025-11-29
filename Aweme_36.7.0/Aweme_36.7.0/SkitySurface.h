@class SkityContext;
@protocol MTLTexture;

@interface SkitySurface : NSObject {
    struct GPUContext { void /* function */ **x0; void /* function */ *x1; void *x2; BOOL x3; BOOL x4; unsigned char x5; BOOL x6; BOOL x7; } *_gpu_ctx;
    struct unique_ptr<skity::GPUSurface, std::default_delete<skity::GPUSurface>> { struct GPUSurface *__ptr_; } _gpu_surface;
    void *_frame_canvas;
}

@property (weak, nonatomic) SkityContext *context;
@property (readonly, retain, nonatomic) id<MTLTexture> targetTexture;
@property (nonatomic) double contentScale;

- (id)initWithTexture:(id)a0 context:(id)a1;
- (id)beginRenderPass;
- (void)flush;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)replay:(id)a0;

@end
