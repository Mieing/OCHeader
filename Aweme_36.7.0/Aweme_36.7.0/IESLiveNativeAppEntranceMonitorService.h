@class NSString, NSMapTable;

@interface IESLiveNativeAppEntranceMonitorService : IESLiveGeneralBaseService <IESLiveNativeAppEntranceMonitor>

@property (retain) NSMapTable *stageMachines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)traceNativeApp:(id)a0 linkType:(unsigned long long)a1 stage:(unsigned long long)a2 stageDesc:(id)a3 extra:(id)a4;
- (void)updateNativeApp:(id)a0 linkType:(unsigned long long)a1 linkStage:(unsigned long long)a2 stageDesc:(id)a3 extra:(id)a4;
- (void)stopTracingWithUserLeavedRoom;
- (id)stageMachineWithAppID:(id)a0 linkType:(unsigned long long)a1;
- (void)trackNativeAppWithMonitorModel:(id)a0;
- (void)removeNativeAppStageMachine:(id)a0 linkType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
