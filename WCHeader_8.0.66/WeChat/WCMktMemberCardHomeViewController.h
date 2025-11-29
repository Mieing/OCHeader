@class MMUILabel, UIButton, NSIndexPath, NSString, UIView, WCMktMemberCardHomeLogicController, MMTableView;

@interface WCMktMemberCardHomeViewController : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCMktMemberCardHomeLogicControllerDelegate>

@property (retain, nonatomic) WCMktMemberCardHomeLogicController *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *headerContentLabel;
@property (retain, nonatomic) UIButton *headerContentCoverBtn;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) NSIndexPath *willDeleteIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)updateFooterView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (void)handleHeaderRefresh;
- (void)sortRuleCoverBtnClick;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)updateRightBarButton;
- (void)rightBarButtonClick;
- (void)setupEmptyView;
- (void)bubbleBtnClick;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableViewNeedRefresh;
- (void)onTableViewNeedDeleteWithIndexPath:(id)a0;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedUpdateSortContent;
- (BOOL)isVCFromJsapiScene;
- (void).cxx_destruct;

@end
