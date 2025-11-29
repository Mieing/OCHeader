@class AWEIAPStoreNavigationBar, NSString, AWEUITextLoadingView, UIImageView, UIButton, NSDictionary, AWEIAPStoreManager, UIViewController, UILabel, AWEIAPTutorialEntryView;

@interface AWEIAPStoreViewController : UIViewController <AWERouterViewControllerProtocol, AWEIAPStoreManagerDelegate>

@property (retain, nonatomic) AWEIAPStoreNavigationBar *navigationBar;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *moneyLabel;
@property (retain, nonatomic) UILabel *orderBriefLabel;
@property (retain, nonatomic) UILabel *orderNumberLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) AWEIAPTutorialEntryView *tutorialEntryView;
@property (copy, nonatomic) NSString *valueString;
@property (copy, nonatomic) NSString *moneyString;
@property (copy, nonatomic) NSString *orderBriefString;
@property (copy, nonatomic) NSString *orderNumberString;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *logParams;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) AWEIAPStoreManager *iapStoreManager;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) BOOL isPaySuccess;
@property (nonatomic) BOOL isPaying;
@property (nonatomic) BOOL firstViewDidAppear;
@property (nonatomic) double startPayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)confirmPayAction;
- (void)confirmBtnClicked:(id)a0;
- (void)didFinishProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (id)paramsDictFromJsonString:(id)a0;
- (id)moneyStringInBizParams;
- (void)postInfoAndMonitorWithProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (id)commomReportParamsDict;
- (BOOL)showRefundPrompt;
- (BOOL)hasPromptAlertShowed;
- (void)setHasPromptAlertShowed:(BOOL)a0;
- (id)payGuideString;
- (id)hasPromptAlertShowedKey;
- (void)popViewControllerByPaySuccess:(BOOL)a0;
- (void)tapTutorialEntryView:(id)a0;
- (id)payGuideURLString;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (void)refreshData;

@end
