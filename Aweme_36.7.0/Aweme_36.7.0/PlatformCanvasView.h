@class NSString, KryptonApp, PlatformCanvasViewLayerInfo, CAMetalLayer;

@interface PlatformCanvasView : UIView {
    struct unique_ptr<lynx::canvas::CanvasView, std::default_delete<lynx::canvas::CanvasView>> { struct CanvasView *__ptr_; } native_canvas_view_;
}

@property (nonatomic) BOOL initialized;
@property (weak, nonatomic) KryptonApp *app;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL needProcessGesture;
@property (nonatomic) BOOL initOnDidMoveToWindow;
@property (retain) PlatformCanvasViewLayerInfo *layerInfo;
@property (copy, nonatomic) id /* block */ onMetalFrameChanged;
@property (readonly) CAMetalLayer *metalLayer;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)tryToInitCanvas;
- (void)_onFrameChanged;
- (void)InitCanvasInternal;
- (void)createNativeCanvasView;
- (void)sendTouch:(id)a0 type:(unsigned char)a1 index:(long long)a2 length:(long long)a3 clientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (BOOL)dispatchTouch:(id)a0 touches:(id)a1 withEvent:(id)a2 clientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setupWithName:(id)a0 app:(id)a1;
- (void)initLayerWithDefaultDrawableProperties;
- (void)initLayerWithMetalDrawableProperties;
- (void)freeCanvasMemory;
- (void)restoreCanvasView;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id).cxx_construct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)appDidBecomeActive:(id)a0;

@end
