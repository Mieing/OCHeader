@class IESLiveMultiUserScenarioMonitorContextImpl, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, IESLiveInteractTrackDataSource, IESLiveMultiUserScenarioMonitorContext;

@interface IESLiveMultiUserScenarioMonitorImpl : NSObject <IESLiveMultiUserScenarioMonitor>

@property (retain, nonatomic) IESLiveMultiUserScenarioMonitorContextImpl *contextImpl;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fulllinkQueue;
@property (weak, nonatomic) id<IESLiveInteractTrackDataSource> dataSource;
@property (readonly, nonatomic) id<IESLiveMultiUserScenarioMonitorContext> context;
@property (readonly, nonatomic) NSMutableDictionary *sharedBusinessContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)monitorWithServiceName:(id)a0 eventType:(unsigned long long)a1 eventModule:(unsigned long long)a2 extra:(id)a3;
- (void)monitorServiceName:(id)a0 eventType:(id)a1 eventModule:(id)a2 extra:(id)a3;
- (void)monitorServerAPICallWithServiceName:(id)a0 APIPath:(id)a1 eventModule:(unsigned long long)a2 requestTimestamp:(double)a3 error:(id)a4 response:(id)a5 extra:(id)a6;
- (void)monitorIMMessageReceiveWithServiceName:(id)a0 message:(id)a1 description:(id)a2 eventModule:(unsigned long long)a3 extra:(id)a4;
- (void)monitorSDKAPICallWithServiceName:(id)a0 APIName:(id)a1 eventModule:(unsigned long long)a2 extra:(id)a3;
- (void)monitorSDKCallbackWithServiceName:(id)a0 callbackName:(id)a1 eventModule:(unsigned long long)a2 extra:(id)a3;
- (void)monitorBusinessLogicWithServiceName:(id)a0 description:(id)a1 eventModule:(unsigned long long)a2 extra:(id)a3;
- (void)monitorBusinessLogicWithServiceName:(id)a0 description:(id)a1 eventModule:(unsigned long long)a2 extra:(id)a3 metric:(id)a4;
- (unsigned long long)fullLinkModuleByCurrentScene;
- (void)traceWithBusinessType:(unsigned long long)a0 traceName:(id)a1 step:(id)a2 index:(id)a3;
- (void)traceWithBusinessType:(unsigned long long)a0 traceName:(id)a1 step:(id)a2 extra:(id)a3;
- (void)traceWithBusinessType:(unsigned long long)a0 traceName:(id)a1 step:(id)a2 errorCode:(long long)a3 errorMessage:(id)a4 index:(id)a5 extra:(id)a6;
- (void).cxx_destruct;

@end
