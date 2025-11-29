@class NSString, AWEMusicPlayerModel, AWEMusicPlayEventService;

@interface AWEMusicBridgeService : HTSService <MusicBridgeService, AWEMusicServiceDelegate>

@property (copy, nonatomic) id /* block */ callH5Handle;
@property (copy, nonatomic) NSString *reactID;
@property (copy, nonatomic) NSString *deallocReactID;
@property (nonatomic) double eventSingleDuration;
@property (nonatomic) double eventTotalDuration;
@property (nonatomic) BOOL eventProgressBarMove;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (nonatomic) BOOL eventIsLyricMove;
@property (nonatomic) double eventStarTime;
@property (nonatomic) double firstSeekTime;
@property (weak, nonatomic) AWEMusicPlayerModel *currentModel;
@property (nonatomic) double currentMusicDuration;
@property (retain, nonatomic) AWEMusicPlayEventService *eventService;
@property (copy, nonatomic) id /* block */ callRNHandle;
@property (copy, nonatomic) id /* block */ callLynxHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)musicService:(id)a0 didFinishedWithError:(id)a1;
- (void)musicServicePreparedToPlay:(id)a0;
- (void)musicServiceReadyToPlay:(id)a0;
- (void)musicServiceDidPlay:(id)a0;
- (void)musicServiceDidPause:(id)a0 pauseType:(long long)a1;
- (void)musicServiceDidStop:(id)a0;
- (void)musicServiceDidSeek:(id)a0;
- (void)musicServiceInPlaying:(id)a0;
- (void)musicServiceMusicChanged:(id)a0;
- (void)musicCollectedStatusChanged:(id)a0;
- (void)musicExecJSBParams:(id)a0 completion:(id /* block */)a1 callH5Handle:(id /* block */)a2;
- (void)musicExecRNJSBParams:(id)a0 completion:(id /* block */)a1;
- (void)registerForceStopNotifications:(id)a0;
- (void)registerRNDeallocNotification:(id)a0;
- (void)registerFavoriteActionNotification:(id)a0;
- (void)registerFollowNotification:(id)a0;
- (void)registerUnFollowNotification:(id)a0;
- (void)musicServiceInit;
- (void)commonExecAction:(id)a0 data:(id)a1 resultHandler:(id /* block */)a2;
- (void)rnDeallocNote:(id)a0;
- (void)userFollowStatusChanged:(id)a0;
- (void)userUnFollowStatusChanged:(id)a0;
- (void)execActionSetData:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionPlay:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionPlayData:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionStop:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionPause:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionResume:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionSeek:(id)a0 completionHandler:(id /* block */)a1;
- (void)execActionCurrentTime:(id)a0 completion:(id /* block */)a1;
- (void)execActionUpdateEventData:(id)a0 completionHandler:(id /* block */)a1;
- (void)invokeState:(id)a0;
- (void)commonCallWebWithEventID:(id)a0 data:(id)a1;
- (id)playQueueWithJSBDict:(id)a0;
- (BOOL)IsNotCurrentModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)broadcastDuration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)forceStop;

@end
