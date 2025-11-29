@class CAGradientLayer, UIView;

@interface AWELoadingAndVolumeView : UIView

@property (nonatomic) BOOL showVolume;
@property (nonatomic) long long status;
@property (nonatomic) double lastVolume;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *animationContainer;
@property (retain, nonatomic) CAGradientLayer *animGradientLayer;
@property (retain, nonatomic) UIView *volumeView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) float progress;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) double loadingProgress;
@property (nonatomic) long long loadingType;
@property (retain, nonatomic) UIView *progressView;

+ (void)_aweLazyRegisterLoad_friends;

- (void)layoutSubviews;
- (void)hideAndEndAnimation;
- (void)beginLeftToMidAnimation;
- (void)beginLeftToRightAnimation;
- (void)beginCenterToSideAnimation;
- (void)friends_setVolume:(double)a0;
- (void).cxx_destruct;
- (void)setVolume:(double)a0;
- (void)_dismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStatus;

@end
