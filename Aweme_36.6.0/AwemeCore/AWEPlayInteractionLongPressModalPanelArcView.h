@class NSString, CAShapeLayer;

@interface AWEPlayInteractionLongPressModalPanelArcView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) CAShapeLayer *arcLayer;
@property (nonatomic) unsigned long long currentDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setupLayer;
- (id)createArcPath;
- (void)stopCurrentAnimation;
- (void)createAnimationWithDirection:(unsigned long long)a0 duration:(double)a1;
- (id)createLinePath;
- (void)animateToArcWithDuration:(double)a0;
- (void)animateToLineWithDuration:(double)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
