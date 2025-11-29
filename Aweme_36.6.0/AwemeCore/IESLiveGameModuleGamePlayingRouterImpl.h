@class NSString, IESLiveSubscriberUtil;
@protocol IESLiveRoomService;

@interface IESLiveGameModuleGamePlayingRouterImpl : NSObject <IESLiveGamePlayingRouter>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveSubscriberUtil *subscriberUtil;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL mIsGamePlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isXPlayAndLGameRunning;
- (BOOL)isXPlayRunningClearScreen;
- (BOOL)isXPlayRtcConnecting;
- (void)subscribeGamePlayingChange:(id /* block */)a0 subscriber:(id)a1;
- (BOOL)isGamePlaying;
- (BOOL)isInteractGameInRunning;
- (id)initWithLiveRoom:(id)a0 diContext:(id)a1;
- (BOOL)isXPlayRunning;
- (BOOL)isXPlayRunningInSceneSingle;
- (void)p_registObserves;
- (void)observeGamePlayingEventWithVal:(id)a0;
- (id)findModelWithSubscribe:(id)a0;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;

@end
