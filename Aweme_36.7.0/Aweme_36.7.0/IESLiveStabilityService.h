@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveStabilityService : IESLiveGeneralBaseService <IESLiveStabilityEvent, IESECommerceLiveTracker>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (void)liveSceneChanging;
- (void)liveSceneNetflix;
- (void)liveComponentMountFinish;
- (void)trackECRoom:(BOOL)a0;
- (void).cxx_destruct;

@end
