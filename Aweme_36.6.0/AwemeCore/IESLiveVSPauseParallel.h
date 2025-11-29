@class NSString, UIImageView, UIImage, CAShapeLayer;

@interface IESLiveVSPauseParallel : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) CAShapeLayer *baseLayer;
@property (retain, nonatomic) CAShapeLayer *leftLineLayer;
@property (retain, nonatomic) CAShapeLayer *rightLineLayer;
@property (nonatomic) BOOL isLandscape;
@property (readonly, nonatomic) double lineWidth;
@property (readonly, nonatomic) double lineHeight;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } totalSize;
@property (readonly, nonatomic) double deltaWidth;
@property (readonly, nonatomic) double leftLineCenterX;
@property (readonly, nonatomic) double rightLineCenterX;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (copy, nonatomic) id /* block */ parallelAnimationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyAccessibility;
- (void)seperateParallel:(double)a0 time:(double)a1;
- (void)mergeParallel:(double)a0 time:(double)a1;
- (void)updateIsPlaying:(BOOL)a0 isLandscape:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })caculateTargetPositionWithLayer:(id)a0 targetOrigin:(struct CGPoint { double x0; double x1; })a1 targetSize:(struct CGSize { double x0; double x1; })a2;
- (id)layerBoundsAnimatedWithLayer:(id)a0 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (id)layerPositionAnimatedWithLayer:(id)a0 targetPosition:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
