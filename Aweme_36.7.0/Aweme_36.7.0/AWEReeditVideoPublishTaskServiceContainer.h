@interface AWEReeditVideoPublishTaskServiceContainer : IESStaticContainer

- (id)provideSingleton:(id)a0 AWEPublishInfiniTaskFlowMessageServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEPublishInfiniTaskProgressServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEPublishInfiniTaskTimeServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEPublishInfiniTaskFlowServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEPublishInfiniTaskStageServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEPublishInfiniTaskCoordinatorServiceProtocol:(id)a1;
- (void)dealloc;

@end
