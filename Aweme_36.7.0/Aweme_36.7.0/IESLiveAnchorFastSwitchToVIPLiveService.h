@class NSString, IESLiveAnchorContext;

@interface IESLiveAnchorFastSwitchToVIPLiveService : IESLiveGeneralBaseService <IESLiveAnchorFastSwitchToVIPLiveInterface>

@property (weak, nonatomic) IESLiveAnchorContext *context;
@property (nonatomic) BOOL isSwitchingToVIPLive;
@property (nonatomic) long long currentRoomScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)fastSwitchToVIPLive;
- (void)fastOpenVIPRoom;
- (void).cxx_destruct;

@end
