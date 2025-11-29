@class TXCMetalDisplayConfig, TXCRenderFrameCoords, TXCVideoRenderConfig, TXCMetalRenderer, UIView, NSString, TXCMetalRenderTargetView, TXCMetalContext, TXCDispatchQueue, TXCMTKView, NSObject;
@protocol MTLTexture, TXILocalVideoRendererDelegate, OS_dispatch_semaphore;

@interface TXCMetalVideoRenderer : TXCVideoBindableObject <TXCMTKViewDelegate, TXILocalVideoRenderer> {
    id<MTLTexture> _rgbTexture;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _mainThreadTaskCount;
    struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *__ptr_; struct __shared_weak_count *__cntrl_; } _pbFrame;
    NSObject<OS_dispatch_semaphore> *_inflate_semaphore;
    struct Lock { struct LockImpl { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } native_handle_; } lock_; } _lock;
    struct SkMatrix { float fMat[9]; int fTypeMask; } _transform_matrix;
}

@property (readonly, nonatomic) TXCDispatchQueue *queue;
@property (readonly, nonatomic) TXCMetalContext *mtlContext;
@property (readonly, nonatomic) TXCVideoRenderConfig *config;
@property (retain, nonatomic) TXCMetalDisplayConfig *displayConfig;
@property (retain, nonatomic) TXCMetalRenderer *render;
@property (retain, nonatomic) TXCMetalRenderTargetView *renderTarget;
@property (retain, nonatomic) TXCRenderFrameCoords *renderCoords;
@property (weak, nonatomic) UIView *superView;
@property (retain) TXCMTKView *renderView;
@property (nonatomic) BOOL requestClearView;
@property (nonatomic) BOOL enableTappingScreenToFocus;
@property struct { double red; double green; double blue; double alpha; } backgroundColorValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TXILocalVideoRendererDelegate> rendererDelegate;

- (id)initWithQueue:(id)a0 config:(id)a1 view:(id)a2;
- (void)dealloc;
- (void)applyConfigs;
- (void)setupMetalContext:(struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })a0;
- (void)processVideoFrame:(id)a0 onComplete:(id /* block */)a1;
- (BOOL)processNativePixelFrame:(struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })a0;
- (void)updateRenderView:(id)a0;
- (BOOL)waitForMainThreadTasksToFinish;
- (void)setRenderInputFrameSize;
- (void)start;
- (void)stop:(BOOL)a0;
- (void)clearRenderTask;
- (void)clearScreen;
- (void)setFillMode:(unsigned long long)a0;
- (void)setMirrorMode:(unsigned long long)a0;
- (void)setRotation:(unsigned long long)a0;
- (void)setBackgroundColor:(unsigned int)a0;
- (void)updateFrameCoordWithMetaData:(struct shared_ptr<liteav::video::PixelFrameMetaData> { struct PixelFrameMetaData *x0; struct __shared_weak_count *x1; })a0;
- (void)updateFrameMatrixWithMetaData:(struct shared_ptr<liteav::video::PixelFrameMetaData> { struct PixelFrameMetaData *x0; struct __shared_weak_count *x1; })a0;
- (void)updateDisplayConfig:(struct shared_ptr<liteav::video::PixelFrameMetaData> { struct PixelFrameMetaData *x0; struct __shared_weak_count *x1; })a0 pixelFormat:(int)a1;
- (void)snapshotOnComplete:(id /* block */)a0;
- (id)convertPointToVideoFrame:(struct CGPoint { double x0; double x1; })a0 isFrontCamera:(BOOL)a1;
- (void)showFocusViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)EnableTappingScreenToFocus:(BOOL)a0;
- (void)setExternalFocusPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderRect;
- (void)drawInTXCMTKView:(id)a0;
- (void)onTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onPinchScale:(double)a0;
- (void)onSizeChange:(struct CGSize { double x0; double x1; })a0 sizeInPixels:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
