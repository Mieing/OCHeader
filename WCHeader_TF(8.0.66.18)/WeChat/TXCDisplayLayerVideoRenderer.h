@class NSString, TXCVideoRenderConfig, UIView, TXCDisplayLayerView, TXCDispatchQueue;
@protocol TXILocalVideoRendererDelegate;

@interface TXCDisplayLayerVideoRenderer : TXCVideoBindableObject <TXILocalVideoRenderer> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _mainThreadTaskCount;
    struct unique_ptr<liteav::video::PixelFramePool, std::default_delete<liteav::video::PixelFramePool>> { struct __compressed_pair<liteav::video::PixelFramePool *, std::default_delete<liteav::video::PixelFramePool>> { struct PixelFramePool *__value_; } __ptr_; } _pixelFramePool;
}

@property (readonly, nonatomic) TXCDispatchQueue *queue;
@property (readonly, nonatomic) TXCVideoRenderConfig *config;
@property (weak, nonatomic) UIView *superView;
@property (retain) TXCDisplayLayerView *renderView;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) unsigned long long renderRotation;
@property (weak, nonatomic) id<TXILocalVideoRendererDelegate> rendererDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)IsHdrSupported:(int)a0;
+ (BOOL)IsBufferTypeSupported:(int)a0;

- (id)initWithQueue:(id)a0 config:(id)a1 view:(id)a2;
- (void)dealloc;
- (void)applyConfigs;
- (void)processVideoFrame:(id)a0 onComplete:(id /* block */)a1;
- (BOOL)processNativePixelFrame:(struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })a0;
- (void)createPixelFramePoolIfNeeded:(struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })convertByteBufferToPixelBuffer:(struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)drawFrame:(struct __CVBuffer { } *)a0;
- (void)updateRenderView:(id)a0;
- (BOOL)waitMainThreadTaskFinishIfNeed;
- (void)start;
- (void)stop:(BOOL)a0;
- (void)clearRenderTask;
- (void)clearScreen;
- (void)setMirrorMode:(unsigned long long)a0;
- (void)setRotation:(unsigned long long)a0;
- (void)setBackgroundColor:(unsigned int)a0;
- (void)EnableTappingScreenToFocus:(BOOL)a0;
- (void)setExternalFocusPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateFrameCoordWithMetaData:(struct shared_ptr<liteav::video::PixelFrameMetaData> { struct PixelFrameMetaData *x0; struct __shared_weak_count *x1; })a0;
- (void)snapshotOnComplete:(id /* block */)a0;
- (id)convertPointToVideoFrame:(struct CGPoint { double x0; double x1; })a0 isFrontCamera:(BOOL)a1;
- (void)showFocusViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderRect;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
