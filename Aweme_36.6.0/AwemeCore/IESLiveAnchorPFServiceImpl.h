@class NSString, IESLiveGCDTimer, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveAnchorPFServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorPFService, IESLiveAnchorPFHandlerDelegate, IESLiveAnchorRoomStatusChangeEvents>

@property (nonatomic) BOOL hasStartLive;
@property (nonatomic) long long workInterval;
@property (retain, nonatomic) IESLiveGCDTimer *workTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *handlerClasses;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) NSHashTable *stateObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)onAudioDeviceStatus:(long long)a0 isMute:(BOOL)a1 audioDb:(long long)a2 inTime:(long long)a3;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)stopAnchorLive;
- (long long)currentPFLevel;
- (long long)currentStallState;
- (long long)currentMicrophoneState;
- (long long)currentTemperatureState;
- (long long)currentMemoryState;
- (void)triggerCollect;
- (void)initializeParams;
- (void)levelDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)destroyParams;
- (void)memoryStateDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)microphoneStateDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)networkStateDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)didLoadHandlers;
- (void)didUnloadHandlers;
- (void)setupWorkTimer;
- (void)didStartLiveHandlers;
- (void)cleanWorkTimer;
- (void)didStopLiveHandlers;
- (void)pauseLiveHandlers;
- (void)resumeLiveHandlers;
- (void)setupHandlerClasses;
- (void)cleanPerfInfo;
- (void)savePerfInfo:(id)a0;
- (void)temperatureStateDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)stallStateDidChangeFrom:(long long)a0 to:(long long)a1;
- (void).cxx_destruct;
- (void)setupHandlers;
- (void)addStateObserver:(id)a0;
- (void)removeStateObserver:(id)a0;
- (long long)currentNetworkState;

@end
