@class NSString, MMWebCanvasViewProxy, JSContext;
@protocol MMWebCanvasViewEventDelegate, MMWebCanvasViewDataDelegate;

@interface MMWebCanvasView : WAOpenGLView <EJGestureDelegate>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *canvasId;
@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) MMWebCanvasViewProxy *proxyDelegate;
@property (nonatomic) BOOL hasStopped;
@property (weak, nonatomic) id<MMWebCanvasViewEventDelegate> eventDelegate;
@property (weak, nonatomic) id<MMWebCanvasViewDataDelegate> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 jsContext:(id)a1 appId:(id)a2 canvasId:(id)a3 useContentModeTopLeft:(BOOL)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 jsContext:(id)a1 appId:(id)a2 canvasId:(id)a3 experimental:(BOOL)a4 customStyleImpl:(BOOL)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 jsContext:(id)a1 appId:(id)a2 canvasId:(id)a3 experimental:(BOOL)a4 customStyleImpl:(BOOL)a5 isPreserveDrawingBufferDoClear:(BOOL)a6 useContentModeTopLeft:(BOOL)a7;
- (BOOL)enableRetryLoadImageWhenEnterFg;
- (BOOL)isEnbalePreserveDrawingBufferDoClear;
- (BOOL)isRollbackEjectaPresent;
- (void)internalInit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)injectNativeGlobal;
- (void)stop;
- (id)genJsTouchEventFromEJTouchData:(id)a0;
- (void)onTouchBegin:(id)a0;
- (void)onTouchEnd:(id)a0;
- (void)onTouchCancel:(id)a0;
- (void)onTouchMoved:(id)a0;
- (void).cxx_destruct;

@end
