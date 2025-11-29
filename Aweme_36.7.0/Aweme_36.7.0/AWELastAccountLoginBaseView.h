@class UILabel, DYUserProtocolView, NSDictionary, NSObject, YYAnimatedImageView, DYLoginNextActionButton, UIView, AWELastAccountLoginViewModel, UIButton, NSString, NSTimer, AWETrustAccountContainerView, LOTAnimationView;
@protocol OS_dispatch_source, AWELastAccountLoginViewDelegate;

@interface AWELastAccountLoginBaseView : UIView <AWELastAccountLoginView> {
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSTimer *loginButtonBreathTimer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) YYAnimatedImageView *avatarView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) LOTAnimationView *finishAnimationView;
@property (retain, nonatomic) UIButton *otherLoginButton;
@property (retain, nonatomic) DYUserProtocolView *userProtocolView;
@property (retain, nonatomic) UIView *tipBackground;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWETrustAccountContainerView *trustContainerView;
@property (retain, nonatomic) AWELastAccountLoginViewModel *model;
@property (weak, nonatomic) id<AWELastAccountLoginViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (void)stopLoadingWithError:(id)a0;
- (BOOL)shouldSetupDifferentiatingTheme;
- (void)setupUIWithMultiAccount:(BOOL)a0;
- (void)startLoginButtonBreathAnimation;
- (void)trackLoginButtonBreathMotionShow;
- (id)aAWEUserLoginThemeAdapter;
- (void)loginActionWithIndex:(unsigned long long)a0;
- (void)loginAction;
- (void)otherLoginAction;
- (void)resetLoginButton;
- (void)loginFromDetainAlert;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didAppear;
- (void)didDisappear;
- (void)dealloc;
- (void)startAnimationWithCompletion:(id /* block */)a0;
- (void)startCountdown;

@end
