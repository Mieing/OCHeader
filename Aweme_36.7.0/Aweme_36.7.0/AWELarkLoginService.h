@class NSURL, UIView;

@interface AWELarkLoginService : NSObject

@property (retain, nonatomic) UIView *keyView;
@property (nonatomic) BOOL showLoadingView;
@property (retain, nonatomic) NSURL *url;

+ (id)shareManager;

- (void)showLoadingParticleView;
- (void)accountPrivacyPolicyAgreeNotification;
- (void)hideLoadingParticleView;
- (void)pushLoginVerifyController:(id)a0;
- (void)larkLoginFailureWithError:(id)a0 ticket:(id)a1;
- (void)larkLoginSuccess:(id)a0 ticket:(id)a1;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)a0;

@end
