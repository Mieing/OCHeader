@class NSString, CECMomentCameraTextViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraService, AFDMCEditService;

@interface CECMomentCameraSecurityViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraLifeCircleEvent, CECMomentCameraFlowServiceSubscriber>

@property (weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)textsArray;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (BOOL)shouldUploadSamplingFrames;
- (BOOL)shouldUploadText;
- (id)textsArrayInString;
- (BOOL)shouldUploadLivePhoto;
- (void).cxx_destruct;

@end
