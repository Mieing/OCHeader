@class NSString, IESLiveCleanScreenNormalAbility;

@interface IESLiveClearScreenServiceImpl : IESLiveGeneralBaseService <IESLiveClearScreenService>

@property (retain, nonatomic) IESLiveCleanScreenNormalAbility *normalAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (BOOL)fragLoadOptEnable;
+ (BOOL)useNewClearService;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (void)keepClearStatusIfNeed;
- (BOOL)enableClearScreenService;
- (id)cleanAbility;
- (BOOL)needAddRecognitionEntry;
- (BOOL)isScreenCleaned;
- (BOOL)isSwipeToCleanScreenEnabled;
- (long long)currentCleanMode;
- (void)switchToCleanMode:(long long)a0 enterType:(long long)a1;
- (void)reportCleanDuringTrackData;
- (void)exitCleanScreenIfNeed;
- (void)switchToCleanScreenModeWithOffset:(double)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)addRecognitionEntryWithTitle:(id)a0 icon:(id)a1 action:(id /* block */)a2;
- (void).cxx_destruct;

@end
