@class UIView, NSString, IESIMSlardarViewControllerInfoInjector, NSIndexPath, NSArray, UITableView, UIViewController, AWEIMConversationContext;
@protocol IESIMVideoMsgAssistManagerProtocol, AWEIMMessageTableViewAction, AWEIMMessageListTrackerInterface, AWEIMMessageListDataInterface, IESIMMessageListLifeCycleAction, IESIMVideoMsgAssistManagerFansGroupFeedEmojisProtocol, IESIMVideoMsgAssistManagerDSPMusicUnavailableProtocol;

@interface IESIMMessageListViewController : UIViewController <AWEIMMessageTableViewDelegate, UITableViewDataSource, UITableViewDelegate, IESIMMessageListViewControllerProtocol>

@property (weak, nonatomic) id<AWEIMMessageTableViewAction> tableViewAction;
@property (weak, nonatomic) id<AWEIMMessageListTrackerInterface> trackerService;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> listDataService;
@property (weak, nonatomic) id<IESIMMessageListLifeCycleAction> lifeCycleAction;
@property (retain, nonatomic) IESIMSlardarViewControllerInfoInjector *slardarInfoInjector;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *view;
@property (readonly, weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMConversationContext *componentContext;
@property (retain, nonatomic) NSIndexPath *selectVideoCoverCellIndexPath;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) id<IESIMVideoMsgAssistManagerProtocol, IESIMVideoMsgAssistManagerFansGroupFeedEmojisProtocol, IESIMVideoMsgAssistManagerDSPMusicUnavailableProtocol> videoMsgAssistManager;

- (id)hmdPageExtension;
- (id)imHmdPage_pageMap;
- (id)p_makeTableView;
- (void)updateAllCellHeightWithAnimation:(id /* block */)a0 onCompletion:(id /* block */)a1;
- (void)handleLayoutAfterScreenRotate;
- (void)p_rebuildTableView;
- (void)p_setupUI;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)conversation;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)conversationContext;

@end
