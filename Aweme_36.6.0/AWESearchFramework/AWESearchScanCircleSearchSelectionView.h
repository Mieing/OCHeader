@class NSString, CAShapeLayer, UIView, NSMutableArray, UIPanGestureRecognizer;
@protocol AWESearchScanCircleSearchSelectionViewDelegate;

@interface AWESearchScanCircleSearchSelectionView : UIView <AWESearchScanCircleSearchSelectionViewProtocol>

@property (weak, nonatomic) UIView *container;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initFrame;
@property (retain, nonatomic) UIView *circleTL;
@property (retain, nonatomic) UIView *circleTR;
@property (retain, nonatomic) UIView *circleBL;
@property (retain, nonatomic) UIView *circleBR;
@property (retain, nonatomic) CAShapeLayer *circleLayerTL;
@property (retain, nonatomic) CAShapeLayer *circleLayerTR;
@property (retain, nonatomic) CAShapeLayer *circleLayerBL;
@property (retain, nonatomic) CAShapeLayer *circleLayerBR;
@property (retain, nonatomic) NSMutableArray *circleViewArray;
@property (retain, nonatomic) NSMutableArray *gesArray;
@property (retain, nonatomic) NSMutableArray *touchViewArray;
@property (retain, nonatomic) UIView *touchView;
@property (retain, nonatomic) UIPanGestureRecognizer *moveViewPanGesture;
@property (weak, nonatomic) id<AWESearchScanCircleSearchSelectionViewDelegate> delegate;
@property (nonatomic) BOOL enableMoveView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayerWithPath:(id)a0;
- (void)updateRectangleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleMoveSelf:(id)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)panGestureBegan:(id)a0;
- (void)panGestureChanged:(id)a0;
- (void)panGestureEnded:(id)a0;
- (void)alphaAnimationDidEnd;
- (void)addScaleAnimation;
- (void)setupCircleView;
- (void)setupCircleLayer;
- (id)circlePanGestureRecognizer;
- (void)handleMoveSelfBegan:(id)a0;
- (void)handleMoveSelfChanged:(id)a0;
- (void)handleMoveSelfEnded:(id)a0;
- (id)initWithContainer:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)a0;

@end
