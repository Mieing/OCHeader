@class NSString, CAShapeLayer, NSArray, NSMutableArray;

@interface IESECWinSmileCurvedView : UIView <CAAnimationDelegate>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edges;
@property (nonatomic) struct CGPoint { double x; double y; } leftCentralPoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightCentralPoint;
@property (nonatomic) double curveWidth;
@property (nonatomic) double curveHeight;
@property (nonatomic) double radius;
@property (nonatomic) double angle;
@property (nonatomic) double centralHeight;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (copy, nonatomic) id /* block */ animationCompletion;
@property (copy, nonatomic) NSString *animationKeyPath;
@property (nonatomic) double animationFromValue;
@property (nonatomic) double animationToValue;
@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSArray *pointsCopy;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long pointCount;
@property (nonatomic) long long step;
@property (copy, nonatomic) NSArray *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)moveAnimated:(BOOL)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)leftToRightAppear:(BOOL)a0 completion:(id /* block */)a1;
- (void)leftToRightDisappear:(BOOL)a0 completion:(id /* block */)a1;
- (void)rightToLeftAppear:(BOOL)a0 completion:(id /* block */)a1;
- (void)rightToLeftDisappear:(BOOL)a0 completion:(id /* block */)a1;
- (void)addAnimation;
- (void)draw:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePointsType:(long long)a0;
- (struct CGPoint { double x0; double x1; })calcStartPoint:(double)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initial;
- (void)setup;
- (void)endAnimation;
- (struct CGSize { double x0; double x1; })size;
- (void)clearPoints;

@end
