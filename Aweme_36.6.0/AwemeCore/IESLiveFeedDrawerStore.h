@class IESLiveDrawerRelationShowApi, RACDisposable, HTSEventContext, NSString, IESLiveMoreLiveEntranceApi;
@protocol IESLiveRoomService, IESLiveFeedDrawerReactions;

@interface IESLiveFeedDrawerStore : NSObject <IESLiveCommonSceneMessageAction>

@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveDrawerRelationShowApi *relationShowApi;
@property (retain, nonatomic) IESLiveMoreLiveEntranceApi *entranceApi;
@property (nonatomic) BOOL hasInteraction;
@property (nonatomic) long long triggerTimes;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveFeedDrawerReactions> reactions;
@property (nonatomic) BOOL liveWillFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showComponentWithPitayaMessage:(id)a0;
- (BOOL)judgeLiveTabGuideCondition2Show;
- (void)fetchMoreLiveEntranceWithBizType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)storeLiveTabGuideShowType:(int)a0;
- (BOOL)checkAndMarkShowSpecialEntranceTimeSpan;
- (void)setEntranceSearchGuideShown;
- (BOOL)fromLiveTab;
- (id)fetchLiveTabFrequencyList;
- (BOOL)canShowDrawerSwipeGuideWithoutSaveState;
- (void)trackCloseGuideShow;
- (void)trackAlertShowMoreAnchorClick;
- (BOOL)checkAndMarkShowConcernListTimeSpan;
- (void)fetchRelationList:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
