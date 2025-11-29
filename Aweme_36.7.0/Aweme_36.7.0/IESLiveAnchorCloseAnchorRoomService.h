@class NSString;

@interface IESLiveAnchorCloseAnchorRoomService : IESLiveGeneralBaseService <IESLiveAnchorCloseAction, IESLiveControllerLifeCycleProtocol>

@property (nonatomic) BOOL isVCWillClose;
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
- (void)closeAnchorRoomByForce:(BOOL)a0 reason:(long long)a1 trace:(id)a2 completion:(id /* block */)a3;
- (void)closeAnchorRoomByRestartWithCompletion:(id /* block */)a0;

@end
