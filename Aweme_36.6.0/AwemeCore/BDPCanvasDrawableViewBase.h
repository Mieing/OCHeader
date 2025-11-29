@class BDPCanvasDisableScrollGestureRecognizer, NSString, BDPPromise, BDPCanvasModel;
@protocol BDPPageContextProtocol;

@interface BDPCanvasDrawableViewBase : UIView <BDPComponentViewProtocol>

@property (retain, nonatomic) BDPPromise *readyPromise;
@property (nonatomic) long long state;
@property (retain, nonatomic) BDPCanvasDisableScrollGestureRecognizer *disableScrollGesture;
@property (nonatomic) BOOL needProcessGesture;
@property (copy, nonatomic) BDPCanvasModel *canvasModel;
@property (nonatomic) long long heliumPtr;
@property (nonatomic) BOOL disableHeliumGestureRecognizer;
@property (nonatomic) long long componentID;
@property (retain, nonatomic) id<BDPPageContextProtocol> pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dispatchTouch:(long long)a0 touches:(id)a1 withEvent:(id)a2;
- (void)createEngineViewIfNeed:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateNeedDisableScroll;
- (void)addDrawableViewIfNeededWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateInnerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doDispatchTouch:(long long)a0 touches:(id)a1 withEvent:(id)a2;
- (void)removeFromCanvasInstance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needProcessGesture:(BOOL)a1;
- (void)addGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)updateModel:(id)a0;

@end
