@class NSString, IESLiveAnchorWatchTime, NSDate;

@interface IESLiveAnchorStateService : IESLiveGeneralBaseService <IESLiveAnchorRoomStatusChangeEvents, IESLiveAnchorStateProvider, IESLiveRoomWatchTimeService>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *liveStartDate;
@property (retain, nonatomic) IESLiveAnchorWatchTime *watchTime;
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
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)stopAnchorLive;
- (void)logSceneEvent:(id)a0 status:(unsigned long long)a1;
- (void)__stopLive;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
