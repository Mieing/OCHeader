@class AWENotificationModelNew, NSString, AWEUILoadingView, AWETeenMessageDataController, UITableView;

@interface AWETeenMessageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETeenMessageTableViewCellDelegate, AWEViewControllerRefreshable, AWEUserMessage, AWEDigitalWellbeingMessage, AWEPadUITrackerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWENotificationModelNew *actionSheetOperationModel;
@property (retain, nonatomic) AWETeenMessageDataController *dataController;
@property (nonatomic) BOOL needRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)titleForActionSheet;
- (void)p_loadMoreData;
- (void)p_refreshData;
- (void)awe_themeDidChange;
- (void)deleteNotice;
- (void)readAllMessage;
- (id)getTitleAction:(id)a0;
- (void)onSettingClick:(id)a0;
- (void)onGotoDetailClick:(id)a0;
- (void)onNoticeTextUnfoldCell:(id)a0;
- (void)p_addHeaderAndFooter;
- (void)p_initFetchData;
- (void)showActionSheet:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)refreshWithCompletion:(id /* block */)a0;

@end
