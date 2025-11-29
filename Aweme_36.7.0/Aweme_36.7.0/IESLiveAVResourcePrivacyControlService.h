@class IESLiveAVResourceDecisionEngine, NSString;

@interface IESLiveAVResourcePrivacyControlService : IESLiveGeneralBaseService <IESLiveAVResourcePrivacyController>

@property (retain, nonatomic) IESLiveAVResourceDecisionEngine *decisionEngine;
@property (nonatomic) long long audioState;
@property (nonatomic) long long videoState;
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
- (id)evaluateAccess:(id)a0;
- (id)liveCore;
- (void).cxx_destruct;
- (id)recorder;

@end
