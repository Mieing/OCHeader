@class NSString, NSDictionary, UIView, UIButton;
@protocol IESLiveRoomService, IESLiveTracker, IESLiveShareService;

@interface AWELiveAdPanelWebViewController : AWEAdWebViewController <WKNavigationDelegate>

@property (retain, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSString *currentURL;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *shareBtn;
@property (retain, nonatomic) UIView *closeIndicator;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (retain, nonatomic) id<IESLiveTracker> liveTracker;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupConfigWithRequestURL:(id)a0;
- (void)p_clickBackBtn:(id)a0;
- (void)p_clickShareBtn:(id)a0;
- (void)applyCornerRadiusOnContentView;
- (void)p_BtnActionWithBtnType:(id)a0;
- (id)initWithRequestURL:(id)a0 configData:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;

@end
