@class NSString;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecordButtonService;

@interface ACCSegmentVideoFlowComponent : ACCFeatureComponent <ACCRecordFlowHandler>

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)startRecordFlowWithSource:(id)a0;
- (void)stopRecordFlowWithSource:(id)a0;
- (void)completeRecordFlowWithSource:(id)a0;
- (BOOL)canStartWithSource:(id)a0;
- (void).cxx_destruct;

@end
