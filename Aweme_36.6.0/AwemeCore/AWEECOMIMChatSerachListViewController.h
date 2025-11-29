@class AWEECOMIMChatSerachListSerachAreaView, NSString, AWEECOMIMChatSerachResultNetErrorView, AWEECOMIMChatSerachResultEmptyView, AWEECOMIMChatSerachListModel, AWEECOMIMChatSerachListBiz, NSDictionary, AWEECOMIMChatSerachListSpecifySerachView, UITableView, NSTimer, AWEECOMIMPageTrackUtil, AWEECOMIMChatSerachListHistorySerachView;

@interface AWEECOMIMChatSerachListViewController : AWEECOMIMBaseViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEECOMIMChatSerachListSpecifySerachView *specifySerachView;
@property (retain, nonatomic) AWEECOMIMChatSerachListHistorySerachView *historySerachView;
@property (nonatomic) long long serachType;
@property (copy, nonatomic) NSString *theOtherId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (retain, nonatomic) AWEECOMIMChatSerachListModel *listModel;
@property (retain, nonatomic) AWEECOMIMChatSerachListModel *listModelNotAggrege;
@property (retain, nonatomic) AWEECOMIMChatSerachListSerachAreaView *serachAreaView;
@property (retain, nonatomic) AWEECOMIMChatSerachResultEmptyView *emptyView;
@property (retain, nonatomic) AWEECOMIMChatSerachResultNetErrorView *netErrrorView;
@property (retain, nonatomic) AWEECOMIMChatSerachListBiz *listBiz;
@property (nonatomic) BOOL shouldShowExpand;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)customInitNavigationBar;
- (id)initWithInfoDict:(id)a0;
- (void)updateUIWithSearchText:(id)a0;
- (void)resignTextViewFirstResponder;
- (void)actualExecution;
- (id)historySerachModel;
- (id)specifySerachModel;
- (id)specifySerachLocationSubTypeWithType:(long long)a0;
- (id)searchMoreLocationSubTypeWithType:(long long)a0;
- (void)transferToMoreViewWithSearchType:(long long)a0;
- (id)searchResultLocationSubTypeWithType:(long long)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (void)updateUI;
- (id)pageName;

@end
