@class NSObject, NSString, NSArray, AWEIMStrangerViewControllerLoadMoreFooter, UIView, UITableView, AWEIMListFPSChecker, UIViewController, AWEIMChatListControllerViewModel, AWEIMChatListControllerContext, NSMutableSet;
@protocol AWEIMChatCellComponentConfigProtocol, AWEIMCommonChatListComponentConfigProtocol, AWEIMCommonChatListDataSourceInterface, OS_dispatch_queue;

@interface AWEIMCommonChatListViewController : AWEIMComponentViewController <UITableViewDataSource, UITableViewDelegate, AWEIMSwipeTableViewCellDelegate, AWEIMCommonChatListDataSourceAction, AWEIMComponentManagerDependency>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMStrangerViewControllerLoadMoreFooter *footer;
@property (retain, nonatomic) NSArray *chatList;
@property (retain, nonatomic) AWEIMChatListControllerViewModel *vm;
@property (weak, nonatomic) id<AWEIMCommonChatListDataSourceInterface> dataSource;
@property (retain, nonatomic) id<AWEIMCommonChatListComponentConfigProtocol> componentConfig;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) id<AWEIMChatCellComponentConfigProtocol> cellComponentConfig;
@property (retain, nonatomic) AWEIMChatListControllerContext *componentContext;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEIMListFPSChecker *fpsChecker;
@property (nonatomic) BOOL firstFrameRendered;
@property (retain, nonatomic) NSMutableSet *asyncLoadSessionIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) UIView *emptyPage;
@property (copy, nonatomic) NSString *trackID;
@property (nonatomic) double durationStart;
@property (nonatomic) double time_point;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1 forOrientation:(long long)a2;
- (id)tableView:(id)a0 editActionsOptionsForRowAtIndexPath:(id)a1 forOrientation:(long long)a2;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1 forOrientation:(long long)a2;
- (void)tableView:(id)a0 didEndEditingRowAtAtIndexPath:(id)a1 forOrientation:(long long)a2;
- (BOOL)tableView:(id)a0 canBeginEditingRowAtIndexPath:(id)a1 forOrientation:(long long)a2 forGesture:(id)a3;
- (void)injectDataSource:(id)a0;
- (void)didFinishLoadPagedChatList;
- (void)didFinishLoadFirstPageData;
- (void)p_trackFirstFrameWithStage:(id)a0 duration:(double)a1 chatCount:(long long)a2;
- (void)monitorFirstFrameRenderAfterReload;
- (void)refreshFirstPageWithNoExp;
- (void)showEmptyPageIfNeed:(BOOL)a0;
- (void)injectChatList:(id)a0;
- (void)refreshPageWithNoExp;
- (void)p_didLongPressTableViewCell:(id)a0;
- (void)p_trackFPS;
- (id)initWithChatListConfig:(id)a0 cellConfig:(id)a1 parentVC:(id)a2 scene:(id)a3;
- (void)injectEmptyPage:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setupUI;

@end
