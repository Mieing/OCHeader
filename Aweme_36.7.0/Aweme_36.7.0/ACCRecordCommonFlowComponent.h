@class NSString;
@protocol ACCRecordFlowService, ACCCameraService;

@interface ACCRecordCommonFlowComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecorderEvent>

@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
