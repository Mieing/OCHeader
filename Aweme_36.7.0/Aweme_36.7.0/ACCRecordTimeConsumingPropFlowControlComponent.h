@class ACCCameraSubscription, NSString;
@protocol ACCRecordFlowControlService;

@interface ACCRecordTimeConsumingPropFlowControlComponent : ACCFeatureComponent <ACCRecordTimeConsumingPropFlowControlService, ACCRecordFlowHandler>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)cameraFlowStartRecordFlowWithSource:(id)a0;
- (void)cameraFlowFinishRecordWithSource:(id)a0;
- (void)startRecordFlowWithSource:(id)a0;
- (void)stopRecordFlowWithSource:(id)a0;
- (void)completeRecordFlowWithSource:(id)a0;
- (BOOL)canStartWithSource:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
