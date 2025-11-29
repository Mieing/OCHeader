@class NSString;
@protocol ACCRecordFlowService, ACCRecordFlowControlService;

@interface ACCRecordScanFlowComponent : ACCFeatureComponent <ACCRecordFlowHandler>

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)startRecordFlowWithSource:(id)a0;
- (void)stopRecordFlowWithSource:(id)a0;
- (void).cxx_destruct;

@end
