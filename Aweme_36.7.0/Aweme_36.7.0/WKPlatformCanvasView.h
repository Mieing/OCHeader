@class WKKryptonApp, NSString, WKPlatformCanvasViewLayerInfo;

@interface WKPlatformCanvasView : UIView {
    struct unique_ptr<lynx::wkcanvas::CanvasView, std::default_delete<lynx::wkcanvas::CanvasView>> { struct CanvasView *__ptr_; } native_canvas_view_;
}

@property (nonatomic) BOOL kr_initialized;
@property (weak, nonatomic) WKKryptonApp *kr_app;
@property (copy, nonatomic) NSString *kr_name;
@property (nonatomic) BOOL kr_needProcessGesture;
@property (retain) WKPlatformCanvasViewLayerInfo *kr_layerInfo;

+ (Class)layerClass;

- (void)tryToInitCanvas;
- (void)_onFrameChanged;
- (void)InitCanvasInternal;
- (void)createNativeCanvasView;
- (void)sendTouch:(id)a0 type:(unsigned char)a1 index:(long long)a2 length:(long long)a3 clientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (BOOL)dispatchTouch:(id)a0 touches:(id)a1 withEvent:(id)a2 clientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setupWithName:(id)a0 app:(id)a1;
- (void)initLayerWithDefaultDrawableProperties;
- (void)freeCanvasMemory;
- (void)restoreCanvasView;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id).cxx_construct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;

@end
