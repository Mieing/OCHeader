@class AWEMusicCoverButton, NSString, LOTAnimationView, UIImageView, AWEGradientView, UILabel, UIViewController;

@interface AWEPlayInteractionStyleTwoMusicView : UIView <CAAnimationDelegate, AWEPlayInteractionMusicViewProtocol>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEGradientView *backgroundView;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) LOTAnimationView *lottieIconView;
@property (retain, nonatomic) UILabel *playInteractionLabel;
@property (retain, nonatomic) UIImageView *playInteractionIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEMusicCoverButton *musicButton;
@property (retain, nonatomic) UIImageView *listenIconView;
@property (retain, nonatomic) UILabel *listenTitleLabel;

- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)makeConstraints;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)layoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_updateUIWithShadow:(BOOL)a0;
- (id)p_listenTitle;
- (void)updateLayoutWithModel:(id)a0 context:(id)a1;
- (BOOL)needPlayAnimation;
- (void)updatePlayInteractionTitle:(id)a0;
- (double)iconSize;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
