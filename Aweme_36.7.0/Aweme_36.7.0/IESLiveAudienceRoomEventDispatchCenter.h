@class NSString, IESLiveAudienceContainerContext, NSHashTable;
@protocol HTSLiveAudienceActions, HTSLiveAppLifeCycleActions, IESLiveAudienceEventReceiver, HTSLiveNetworkStatusActions;

@interface IESLiveAudienceRoomEventDispatchCenter : NSObject <IESLivePauseAction, IESLiveAudienceEventDispatcher>

@property (weak, nonatomic) IESLiveAudienceContainerContext *context;
@property (retain, nonatomic) NSHashTable<IESLiveAudienceEventReceiver> *subscribers;
@property (retain, nonatomic) id<HTSLiveAudienceActions> audienceActionCreator;
@property (retain, nonatomic) id<HTSLiveAppLifeCycleActions> appLifeCycleActionCreator;
@property (retain, nonatomic) id<HTSLiveNetworkStatusActions> networkDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (BOOL)couldCloseRoom;
- (void)didFirstFrame:(id)a0;
- (void)didStartPlay:(id)a0;
- (void)willOrientationTransition:(long long)a0;
- (void)didOrientationTransition:(long long)a0;
- (void)onNetworkStatusChanged:(id)a0;
- (void)roomDidEnterBackground;
- (void)roomWillEnterForeground;
- (void)roomDidBecomeActive;
- (void)roomWillTerminate;
- (void)roomWillResignActive;
- (void)didClickPauseButton:(id)a0 forState:(unsigned long long)a1;
- (void)registerAudienceEventReceiver:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
