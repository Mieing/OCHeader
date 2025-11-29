@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider, ACCRecordTimeConsumingPropFlowControlService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordPropService;

@interface AWERecordFlowAIGCInterceptHandler : NSObject <AWERecordFlowInterceptService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordTimeConsumingPropFlowControlService> consumingPropControlService;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraFlowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishRecordFlow;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (BOOL)canInterceptOperationWith:(id)a0;
- (BOOL)isConsumingProp;
- (void).cxx_destruct;

@end
