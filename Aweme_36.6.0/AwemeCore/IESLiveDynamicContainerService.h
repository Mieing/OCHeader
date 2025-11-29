@class IESLiveDynamicContainerLoader;

@interface IESLiveDynamicContainerService : IESLiveGeneralBaseService

@property (retain, nonatomic) IESLiveDynamicContainerLoader *loader;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (void).cxx_destruct;

@end
