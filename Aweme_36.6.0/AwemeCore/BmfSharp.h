@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BmfSharp : NSObject <IBmfSharp> {
    struct shared_ptr<SHARP_IMPL_BASE> { struct SHARP_IMPL_BASE *__ptr_; struct __shared_weak_count *__cntrl_; } impl_[5];
    struct BmfSharpExtraInfo { int algo_type; float wt; float thr; float ovrt; float g0; float lc_wt_thr; BOOL adaptive; BOOL sync; } extra_info_[5];
    int algo_status_[5];
    struct shared_ptr<BmfImageDataPool<BmfTextureData>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } pool_;
    struct shared_ptr<hydra::MetalRuntime> { struct MetalRuntime *__ptr_; struct __shared_weak_count *__cntrl_; } metal_runtime_;
    int algo_type_;
    int pool_size_;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx_;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sharp_impl_init_queue_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(int)a0 :(float)a1 :(float)a2 :(float)a3 :(float)a4 :(float)a5 :(BOOL)a6 :(BOOL)a7;
- (id)processImageWithInput:(id)a0 Weight:(float)a1 Threshold:(float)a2 OverRatio:(float)a3 G0:(float)a4 LcWeightThr:(float)a5 UseAdaptiveControl:(BOOL)a6 Sync:(BOOL)a7 Error:(id *)a8;
- (id)initForImageWithAlgoType:(int)a0 AndError:(id *)a1;
- (int)process:(id)a0 :(id)a1;
- (int)initSharpImpl:(int)a0 :(float)a1 :(float)a2 :(float)a3 :(float)a4 :(float)a5 :(BOOL)a6 :(BOOL)a7;
- (id)initWithPoolSize:(int)a0 :(int)a1 :(float)a2 :(float)a3 :(float)a4 :(float)a5 :(float)a6 :(BOOL)a7 :(BOOL)a8;
- (int)process:(id)a0 WithExtraInfo:(struct BmfSharpExtraInfo { int x0; float x1; float x2; float x3; float x4; float x5; BOOL x6; BOOL x7; } *)a1 AndExtraMode:(int)a2;
- (int)process:(struct __CVBuffer { } *)a0 GetResult:(struct BmfSharpData **)a1 WithExtraInfo:(struct BmfSharpExtraInfo { int x0; float x1; float x2; float x3; float x4; float x5; BOOL x6; BOOL x7; } *)a2 AndExtraMode:(int)a3;
- (int)giveBackBuffer:(void *)a0;
- (int)process:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
