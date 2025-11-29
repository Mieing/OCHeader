@class NSArray, NSString, UIView, DUXActionSheet, UITableView;
@protocol BDXViewContainerProtocol;

@interface AWESelfDigitalControlViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMSettingModelUpdateMessage, AWEUserMessage, AWEComplianceMessage, DUXActionSheetDelegate, AWEAntiAddictionInfoModelUpdateMessage, BDXContainerLifecycleProtocol, AWERouterViewControllerProtocol>

@property (retain, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL showRedDots;
@property (copy, nonatomic) NSString *guardianText;
@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (nonatomic) BOOL isSmallScreen;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
+ (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
+ (void)tapTimeManager;
+ (void)tapMinorRefundCell;
+ (id)minorRefundURLString;
+ (void)tapTeenModeCell:(id)a0;
+ (void)tapParentalGuardianCell:(id)a0 showRedDots:(BOOL)a1;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (BOOL)shouldShowParentalGuardian;
- (void)backBtnClicked:(id)a0;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (void)didUpdateAntiAddictionInfoModel:(BOOL)a0 currentModel:(id)a1;
- (id)vcTitle;
- (void)p_addModel:(id)a0 intoArray:(id)a1;
- (void)listControlDidChange;
- (void)fetchUserSettingsWithCompletion:(id /* block */)a0;
- (void)constructSectionDataArray;
- (void)setupKitView;
- (BOOL)shouldShowNavBottomLine;
- (BOOL)shouldShowHintView;
- (BOOL)shouldShowTimeManager;
- (void)tapTeenModeCell;
- (void)tapTimeLockCell;
- (void)tapTimeManager;
- (void)tapParentalGuardianCell;
- (void)tapMinorRefundCell;
- (void)closeHintView;
- (void)tapHintView;
- (void)updateTimeManagerStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
