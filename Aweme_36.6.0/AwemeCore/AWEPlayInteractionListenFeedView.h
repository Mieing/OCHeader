@class UILabel, NSString, LOTAnimationView, AWEMusicCoverButton, AWEGradientView, UIImageView, UIViewController;

@interface AWEPlayInteractionListenFeedView : UIView <CAAnimationDelegate, AWEPlayInteractionMusicViewProtocol>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEGradientView *backgroundView;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) LOTAnimationView *lottieIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEMusicCoverButton *musicButton;
@property (retain, nonatomic) UIImageView *listenIconView;
@property (retain, nonatomic) UILabel *listenTitleLabel;

- (void)p_applySafeScaling;
- (void)layoutSubviews;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)makeConstraints;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)layoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_updateUIWithShadow:(BOOL)a0;
- (BOOL)p_showCompilationTitle;
- (id)p_listenTitle;
- (void)updateLayoutWithModel:(id)a0 context:(id)a1;
- (BOOL)needPlayAnimation;
- (double)iconSize;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
