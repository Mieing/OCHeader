@class UIImageView;

@interface MMMusicMVRecommendAnimationLoadingView : UIView

@property (retain, nonatomic) UIImageView *animationImageView;
@property (nonatomic) double duration;
@property (nonatomic) BOOL animationReady;
@property (nonatomic) BOOL isLoadingState;

- (void)configWithImageName:(id)a0 perRoundDuraion:(double)a1;
- (void)configWithImage:(id)a0 perRoundDuraion:(double)a1;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (void).cxx_destruct;

@end
