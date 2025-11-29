@class NSString, IESLiveFeedDrawerStore, RACCompoundDisposable;
@protocol HTSLiveAudienceActions, IESLiveFeedDrawerProvider, IESLiveAudienceWatchInfoService, IESLiveAudienceRoomAwareness;

@interface IESLiveFeedDrawerFragment : IESLiveRoomComponent <IESLiveFeedDrawerProviderActions, HTSLiveAudienceActions, IESLiveAudienceGuideModuleCloseGuideInterface, IESLiveSocialInteractAction, IESLiveDataSyncDelegate, IESLiveFeedDrawerFragmentService, IESLiveFeedDrawerWatchLaterAction, IESLiveFeedDrawerReactions, IESLiveCloseGuideProvider>

@property (retain, nonatomic) IESLiveFeedDrawerStore *store;
@property (retain, nonatomic) id<HTSLiveAudienceActions> audienceActionCreator;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (retain, nonatomic) id<IESLiveAudienceWatchInfoService> audienceInfoService;
@property (retain, nonatomic) id<IESLiveFeedDrawerProvider> feedDrawer;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) RACCompoundDisposable *disposableBag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)shouldShowFeedDrawer:(id)a0;
+ (BOOL)p_isFromNearbyOfEnterFrom:(id)a0 enterMethod:(id)a1;
+ (BOOL)p_isFromVSSportsOfEnterFrom:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (id)verticalTypeInfo;
- (void)remoteRoomDataReady:(id)a0;
- (void)updateWatchLaterText:(id)a0;
- (id)entranceView;
- (void)liveWillFinished;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)updateMoreLiveEntranceInfoWithType:(id)a0 extra:(id)a1;
- (void)setEntranceHidden:(BOOL)a0;
- (void)prepareForShowFeedDrawer;
- (void)didShowFeedDrawer:(id)a0;
- (void)didHideFeedDrawer;
- (BOOL)triggerCloseGuideIfNeed;
- (unsigned long long)closeGuidePriority;
- (BOOL)shouldTriggerNotOnlyOnce;
- (void)setupSubscriber;
- (void)tryToShowTabGuide:(id)a0;
- (void)requestTabGuideInfo:(id)a0;
- (void)handleLiveTabGuide:(id)a0;
- (BOOL)disableSpecialEntranceContent;
- (void)disableBackGestureIfNeeded;
- (void)updateEntranceViewInitStatusIfNeeded;
- (void)updateVerticalTypeInfoWithRoom:(id)a0;
- (BOOL)needShowSpecialEntranceGuide;
- (BOOL)isUpdateVerticalTypeInfoWithMoreLiveEntrance:(id)a0;
- (void)handleMoreLiveEntrance:(id)a0;
- (BOOL)needToDealWithInteractiveScene:(unsigned long long)a0;
- (void)tryShowEntranceLiveTabGuideInfo:(id)a0;
- (BOOL)fromLiveTab;
- (BOOL)isFromFollowTab:(id)a0;
- (void)didLeaveChanneldWithLayout:(id)a0;
- (void).cxx_destruct;

@end
