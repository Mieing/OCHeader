@class NSNumber;

@interface AWEDCFeedTransitionConfig : AWEDCFeedBaseConfig

@property (copy, nonatomic) id /* block */ targetViewCornerRadiusBlock;
@property (copy, nonatomic) id /* block */ shouldScreenSlicedBlock;
@property (copy, nonatomic) id /* block */ wantsStaticTabBarAtTopLayerBlock;
@property (copy, nonatomic) id /* block */ wantsAnimationOptionslock;
@property (copy, nonatomic) id /* block */ wantsTabBarAnimationBlock;
@property (copy, nonatomic) id /* block */ wantsTabBarAlphaAnimationBlock;
@property (copy, nonatomic) id /* block */ wantsTabBarBeStaticBlock;
@property (copy, nonatomic) id /* block */ wantsOptAnimationBlock;
@property (copy, nonatomic) id /* block */ shouldOptZoomEnterAnimation;
@property (copy, nonatomic) id /* block */ updateAnimationWithPercentageBlock;
@property (copy, nonatomic) id /* block */ finishAnimationBlock;
@property (copy, nonatomic) id /* block */ cancelAnimationBlock;
@property (copy, nonatomic) id /* block */ transitionMagnifyStartBlock;
@property (copy, nonatomic) id /* block */ enableZoomTransitionOuterWantsBlackMaskViewBlock;
@property (copy, nonatomic) id /* block */ zoomTransitionOuterMaskViewColorBlock;
@property (copy, nonatomic) id /* block */ transitionBlock;
@property (retain, nonatomic) NSNumber *videoInflowTransitionDuration;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
