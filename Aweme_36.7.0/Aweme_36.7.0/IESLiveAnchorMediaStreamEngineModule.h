@class NSString, IESLiveAnchorContext;
@protocol HTSLiveMediaStreamEngine, IESLiveMonitor;

@interface IESLiveAnchorMediaStreamEngineModule : IESLiveAnchorExecutionModule <HTSLiveMediaStreamEngineDelegate, HTSLiveStreamEngineProvider>

@property (retain, nonatomic) IESLiveAnchorContext *context;
@property (retain, nonatomic) id<HTSLiveMediaStreamEngine> engine;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithContext:(id)a0 engine:(id)a1;

- (void)stopLive;
- (void)bindService;
- (id)subscribeMessages;
- (id)streamEngine;
- (void)engine:(id)a0 stateChanged:(long long)a1;
- (void)engine:(id)a0 detectsCriticalError:(id)a1;
- (void)liveRoomWillDealloc;
- (id)initWithContext:(id)a0 engine:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
