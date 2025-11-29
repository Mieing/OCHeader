@class LOTAnimationView, UIImageView, UIView;

@interface AWEIMTwoAvatarClashView : UIView

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL newStyle;
@property (retain, nonatomic) UIImageView *avatarImageView1;
@property (retain, nonatomic) UIImageView *avatarImageView2;
@property (retain, nonatomic) UIView *avatarBackgroundView1;
@property (retain, nonatomic) UIView *avatarBackgroundView2;

+ (void)p_setupSpringAnimation:(id)a0;

- (id)initWithNewStyle:(BOOL)a0;
- (double)getViewHeight;
- (void)showAvatarWithoutAnimation;
- (void)playClashAnimation;
- (void)configSubview;
- (double)getViewWidth;
- (double)getAvatarDistance;
- (double)getAvatarDiameter;
- (void).cxx_destruct;
- (id)init;
- (double)getTopMargin;

@end
