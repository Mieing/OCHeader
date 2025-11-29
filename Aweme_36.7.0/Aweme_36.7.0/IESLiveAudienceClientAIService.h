@class IESLiveSecurityFeatureApi;
@protocol IESLiveClientAIService;

@interface IESLiveAudienceClientAIService : IESLiveGeneralBaseService

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveSecurityFeatureApi *securityAPI;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void).cxx_destruct;

@end
