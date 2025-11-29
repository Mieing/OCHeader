@class AWEIMListFPSChecker, YYMemoryCache, NSMutableDictionary, NSDictionary, NSString, NSMutableArray;
@protocol AWEIMMessageListDataInterface, AWEIMMessageTableViewInterface;

@interface IESIMMessageListTrackerComponent : AWEIMComponentBase <IESIMMessageListTrackerService, IESIMMessageListLifeCycleAction, AWEIMMessageTableViewAction, IESIMCellRealDisplayProxyAction>

@property (retain, nonatomic) YYMemoryCache *lastVisibleMessageCache;
@property (nonatomic) BOOL scrollInProcess;
@property (retain, nonatomic) AWEIMListFPSChecker *fpsChecker;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (retain, nonatomic) NSMutableArray *ironManTrackerList;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListDataService;
@property (retain, nonatomic) NSMutableDictionary *displayMsgTrackDict;
@property (copy, nonatomic) NSDictionary *startTrackerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableView:(id)a0 awe_partDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableViewWillBeginDragging:(id)a0;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 cell:(id)a2;
- (void)applicationDidBecomeActiveNoti:(id)a0;
- (void)msgList_viewDidLoad:(id)a0;
- (void)msgList_viewDidAppear;
- (void)msgList_firstMsgRendering;
- (void)msgList_viewWillAppear;
- (void)trackDisplayCell:(id)a0;
- (void)p_trackIMOuterPush;
- (void)trackMessageCellDisplay:(id)a0;
- (void)updateLastVisibleMessageCacheWhileNotInScrollProcessWithCell:(id)a0;
- (void)trackWillDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;
- (void)p_trackFPSInfo;
- (void)trackVideoShowingInVisibleCells;
- (void)updateLastVisibleMessageCacheWhileInScrollProcess;
- (void)p_trackEnterChatConsumption;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;

@end
