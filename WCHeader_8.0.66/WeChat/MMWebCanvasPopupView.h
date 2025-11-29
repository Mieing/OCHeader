@class MMWebCanvasPopupParamas, NSString, MMWebCanvasView, UIView;

@interface MMWebCanvasPopupView : MMUIWindow <MMUIViewControllerExt, MMWebJsCanvasViewPortDelegate>

@property (retain, nonatomic) MMWebCanvasPopupParamas *params;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMWebCanvasView *canvasView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithParams:(id)a0;
- (void)updateWithParams:(id)a0;
- (void)internalInit;
- (void)setupRootViewController;
- (void)initBgView;
- (void)updateBgView;
- (void)initCanvasView;
- (void)updateCanvasView;
- (id)canvasId;
- (void)show;
- (void)__repaintCanvas;
- (void)close;
- (void)onTapBackground;
- (void)MMUIViewControllerWillAppear:(id)a0;
- (double)getCanvasViewWidth:(id)a0;
- (double)getCanvasViewHeight:(id)a0;
- (double)getCanvasViewVisibleOffsetY:(id)a0;
- (double)getCanvasViewVisibleContainerHeight:(id)a0;
- (BOOL)isCanvasViewAppear:(id)a0;
- (BOOL)isCanvasViewInBackground:(id)a0;
- (long long)getFPS:(id)a0;
- (void).cxx_destruct;

@end
