@class NSString;

@interface BmfVqscoreOmniOC : NSObject {
    struct VqscoreOmni { struct VqscoreOmniImpl *x0; } *impl_;
    struct MetalRuntime { struct MetalRuntimeImpl *x0; } *metal_runtime_;
    void *creator_;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx_;
    struct shared_ptr<BmfTextureData> { struct BmfTextureData *__ptr_; struct __shared_weak_count *__cntrl_; } model_ibuffer_;
    int target_width_;
    int target_height_;
    BOOL init_;
    float cm_[9];
    float co_[3];
    BOOL set_matrix_;
    NSString *metallib_path_;
    NSString *model_path_;
}

- (struct BmfVqscoreOmniResult { int x0; float x1; })processNV12:(struct __CVBuffer { } *)a0;
- (struct BmfVqscoreOmniResult { int x0; float x1; })processBGRA:(struct __CVBuffer { } *)a0;
- (struct BmfVqscoreOmniResult { int x0; float x1; })processYUV420:(struct __CVBuffer { } *)a0;
- (id)initWithMetalLib:(id)a0 ModelPath:(id)a1;
- (int)yuv2rgbMatrix:(float *)a0 Offset:(float *)a1;
- (struct BmfVqscoreOmniResult { int x0; float x1; })processTexture:(id)a0 SecondTexture:(id)a1 ThirdTexture:(id)a2 DataFmt:(int)a3;
- (struct BmfVqscoreOmniResult { int x0; float x1; })process:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (int)build;
- (id).cxx_construct;
- (void)dealloc;

@end
