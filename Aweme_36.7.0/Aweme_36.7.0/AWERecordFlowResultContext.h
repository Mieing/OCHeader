@class NSString, NSMutableArray, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecorderViewContainer, AWERecordFlowResultHandlerService, AWERecordFlowSourceService, ACCComponentController, ACCCameraService, IESServiceProvider;

@interface AWERecordFlowResultContext : NSObject <LMImageQualityTrackSceneRecordDelegate, AWEStudioBusinessCameraBasicActionProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCComponentController> controller;
@property (retain, nonatomic) id<AWERecordFlowResultHandlerService> resultHandlerService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<AWERecordFlowSourceService> recordFlowSourceService;
@property (retain, nonatomic) NSMutableArray *resultHandlerInstanceList;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraFlowActionCompletion:(BOOL)a0;
- (void)cameraFlowActionBegin;
- (void)cameraFlowActionResult:(id)a0;
- (void)cameraFlowActionStepChangedWith:(unsigned long long)a0 currentStep:(unsigned long long)a1;
- (id)recordScene;
- (id)getEffectInfo;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 controller:(id)a2;
- (id)findMatchHandlerWith:(id)a0;
- (void)recoverRecordConfig;
- (void).cxx_destruct;

@end
