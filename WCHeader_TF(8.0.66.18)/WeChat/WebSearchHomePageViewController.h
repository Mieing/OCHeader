@class UIStackView, UIView, NSString, UIImageView, UIButton, WebSearchHomePagePresenter, WCWebSearchInputProvider, WSWebViewPluginScheduler, MMUILabel, WSLocalTemplateController;

@interface WebSearchHomePageViewController : MMUIViewController <Hero.HeroViewControllerDelegate, WebSearchHomePage, WeChat.WSWebViewExceptionHandlerDelegate, WSWebViewPluginableProtocol>

@property (retain, nonatomic) UIButton *contentSearchHitBtn;
@property (retain, nonatomic) UIButton *contentVoiceInputButton;
@property (retain, nonatomic) UIStackView *logoContainerView;
@property (retain, nonatomic) UIView *searchBoxContainer;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleLogoView;
@property (retain, nonatomic) WebSearchHomePagePresenter *presenter;
@property (retain, nonatomic) WSLocalTemplateController *webviewController;
@property (retain, nonatomic) WCWebSearchInputProvider *inputProvider;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (nonatomic) unsigned long long VCType;
@property (nonatomic) BOOL isPreload;
@property (copy, nonatomic) NSString *liteAppExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preHeatSearchHomePage;
+ (id)getPreloadInstance;
+ (void)removeCache;

- (void)tryRecycleSelf;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)initData;
- (void)initView;
- (void)initLogoView;
- (void)initWebview;
- (void)onNavigationBackItemClick:(id)a0;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (BOOL)hasFirstWebviewJsbridgeReady;
- (void)heroWillStartAnimatingToViewController:(id)a0;
- (void)heroDidEndAnimatingFromViewController:(id)a0;
- (void)heroDidEndAnimatingToViewController:(id)a0;
- (double)getSearchBoxAnimeOffsetY;
- (void)setTransitionAnime;
- (id)getSessionId;
- (void)reloadWebview;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
