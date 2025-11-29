@class NSString;
@protocol IESLiveCommonCastScreenRunnerStrategy;

@interface IESLiveCommonCastScreenRunner : NSObject <IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveCommonCastScreenRunnerStrategy> strategy;
@property (nonatomic) double timeStamp;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)willStopAnchorLive;
- (void)p_setupSEITimer;
- (BOOL)closeAlertShouldShow;
- (void)stopStrategyCastWithClickedToStop:(BOOL)a0 complete:(id /* block */)a1;
- (void)p_stopSEITimerWithClicked:(BOOL)a0;
- (void)p_stopSEITimer;
- (void)p_trackerCastScreenDuration:(BOOL)a0;
- (id)initWithBusiness:(id)a0 room:(id)a1;
- (void)startWithComplete:(id /* block */)a0;
- (void)stopWithComplete:(id /* block */)a0 isClickedToStop:(BOOL)a1;
- (void)forceStopStrategyCast;
- (void).cxx_destruct;

@end
