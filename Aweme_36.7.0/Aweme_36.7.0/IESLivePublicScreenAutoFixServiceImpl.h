@class IESLivePublicScreenViewModel, NSString;

@interface IESLivePublicScreenAutoFixServiceImpl : IESLiveGeneralBaseService <IESLivePublicScreenAutoFixService>

@property (weak, nonatomic) IESLivePublicScreenViewModel *publicScreenViewModel;
@property (nonatomic) BOOL applicationStateIgnore;
@property (nonatomic) long long restartCount;
@property (nonatomic) long long fixCount;
@property (nonatomic) long long fixSuccessCount;
@property (nonatomic) BOOL mockError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)bindPublicScreenViewModel:(id)a0;
- (void)autoFixIfNeeded;
- (void)publicScreenCommitStageCheck;
- (void).cxx_destruct;

@end
