@class UIImageView;

@interface WCFinderAnimationLoadingView : UIView

@property (retain, nonatomic) UIImageView *animationImageView;
@property (nonatomic) double duration;
@property (nonatomic) BOOL animationReady;
@property (nonatomic) BOOL isLoadingState;

+ (id)loadingView;
+ (double)defaultLoadingSize;
+ (id)loadingViewWithWidth:(double)a0;

- (void)configWithImageName:(id)a0 perRoundDuraion:(double)a1;
- (void)configWithImage:(id)a0 perRoundDuraion:(double)a1;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (void)willMoveToWindow:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
