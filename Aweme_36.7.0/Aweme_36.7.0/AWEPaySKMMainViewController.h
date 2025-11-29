@class AWEPaySKMCreateCodeModel, AWEPaySKMMainView, NSString, UIImage, UIView, NSMutableArray, UITableView;

@interface AWEPaySKMMainViewController : CJPayFullPageBaseViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableViewContainer;
@property (retain, nonatomic) UIView *accountBookView;
@property (retain, nonatomic) AWEPaySKMMainView *mainView;
@property (retain, nonatomic) NSMutableArray *payStatusArray;
@property (retain, nonatomic) UIImage *qrCodeImage;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *userIconUrl;
@property (retain, nonatomic) UIImage *userIconImage;
@property (retain, nonatomic) AWEPaySKMCreateCodeModel *codeModel;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) unsigned long long errorStyle;
@property (nonatomic) double lastBrightness;
@property (nonatomic) BOOL isAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)aweDisableFullscreenPopTransition;
- (void)userDidTakeScreenshot;
- (id)getTrackCommonParams;
- (BOOL)canShowAlert;
- (void)setupNavigation;
- (void)reportTrackEvent:(id)a0 params:(id)a1;
- (void)loadDataUseCacheFirst:(BOOL)a0 showLoading:(BOOL)a1;
- (void)addPayStatusInnerPushEvent;
- (void)updateVoiceSwitchStatus;
- (void)removePayStatusInnerPushEvent;
- (void)openDownloadCodePageAutoSave:(BOOL)a0;
- (void)reportCodeRiskScene:(unsigned long long)a0;
- (void)showDownloadCodeGuidePage:(BOOL)a0;
- (void)receivePayStatusInfo:(id)a0;
- (double)calculateFooterViewHeight;
- (void)openAuthUrlWithService:(long long)a0;
- (void)amountSetDidClick;
- (void)saveCodeDidClick;
- (void)goToAccount;
- (void)close;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
