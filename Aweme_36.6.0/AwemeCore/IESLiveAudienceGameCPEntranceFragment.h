@class IESLiveAudienceGameCPEntranceStore, IESLiveAudienceGameCPToolbarItemView, NSString;

@interface IESLiveAudienceGameCPEntranceFragment : IESLiveRoomComponent <IESLiveAudienceGameCPEntranceStoreDelegate, IESLiveAudienceGameCPEntranceRouter>

@property (retain, nonatomic) IESLiveAudienceGameCPEntranceStore *store;
@property (retain, nonatomic) IESLiveAudienceGameCPToolbarItemView *customView;
@property (nonatomic) BOOL hadTriggerToolbarCoordinaryAnimation;
@property (nonatomic) BOOL toolbarInAnimation;
@property (nonatomic) BOOL componentHadDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long currentLocation;
@property (readonly, nonatomic) long long fromType;
@property (readonly, nonatomic) double entranceShowTime;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)playCombineOutAnimationWithCompletion:(id /* block */)a0;
- (void)playCombineBackAnimationWithCompletion:(id /* block */)a0;
- (BOOL)receivedShowEntranceMsg;
- (double)receivedShowEntranceMsgTime;
- (BOOL)entranceIsShown;
- (id)entranceToolbarData;
- (id)livePageTrackerRoute;
- (id)getEntranceItemView;
- (double)enterRoomTimestamp;
- (void)reportLifeCycleAlogWithEventName:(id)a0;
- (id)gameCPKitEntranceInterface;
- (void)bindAnimationActions;
- (void)preloadCardHybridIfNeed;
- (void)_addPreloadCardHybridByDelay:(double)a0;
- (void)_addPreloadCardHybridByTask;
- (void)runningToolbarAnimation;
- (void)showToolbarItemNormalAnimation;
- (void)toolbarEntrancePrepareShowWithItem:(id)a0;
- (void).cxx_destruct;

@end
