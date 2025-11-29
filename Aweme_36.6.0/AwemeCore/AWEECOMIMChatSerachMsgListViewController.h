@class AWEECOMIMChatSerachListSerachAreaView, NSString, NSTimer, AWEECOMIMChatSerachResultEmptyView, AWEECOMIMChatSerachListSectionModel, AWEECOMIMChatSerachListBiz, UITableView, AWEECOMIMPageTrackUtil;

@interface AWEECOMIMChatSerachMsgListViewController : AWEECOMIMBaseViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *theOtherId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *searchKey;
@property (retain, nonatomic) AWEECOMIMChatSerachListSectionModel *sectionModel;
@property (retain, nonatomic) AWEECOMIMChatSerachListSectionModel *sectionModelNotAggrege;
@property (retain, nonatomic) AWEECOMIMChatSerachListSerachAreaView *serachAreaView;
@property (retain, nonatomic) AWEECOMIMChatSerachResultEmptyView *emptyView;
@property (retain, nonatomic) AWEECOMIMChatSerachListBiz *listBiz;
@property (nonatomic) long long serachType;
@property (nonatomic) long long lastSortOrder;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (nonatomic) BOOL needShowCountInfo;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)loadMore;
- (id)locationSubType;
- (void)customInitNavigationBar;
- (id)initWithInfoDict:(id)a0;
- (void)updateUIWithSearchText:(id)a0;
- (void)resignTextViewFirstResponder;
- (void)actualExecution;
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
- (void)setupUI;
- (void)updateUI;
- (id)pageName;

@end
