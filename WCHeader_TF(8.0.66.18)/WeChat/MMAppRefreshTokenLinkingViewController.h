@class UIImageView, DotLoadingView, UILabel, MMWebImageView, MMAppRefreshTokenAppInfo;

@interface MMAppRefreshTokenLinkingViewController : MMUIViewController

@property (retain, nonatomic) UIImageView *wxIconImageView;
@property (retain, nonatomic) MMWebImageView *appIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DotLoadingView *dotLoadingView;
@property (retain, nonatomic) MMAppRefreshTokenAppInfo *appInfo;
@property (copy, nonatomic) id /* block */ dimisssHandler;
@property (nonatomic) unsigned int scene;

- (id)initWithWithAppInfo:(id)a0 dimisssHandler:(id /* block */)a1;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)delayDismissMyself;
- (void)onLaunch3rdApp;
- (void)onClose;
- (void)reportLaunch3rdWithUniversalLink:(id)a0 token:(id)a1 success:(BOOL)a2;
- (void)reportLaunchUniversalLinkFailWithToken:(id)a0 errMsg:(id)a1;
- (void)reportLaunchSchemeSuccess;
- (void).cxx_destruct;

@end
