@class NSString;
@protocol CECMomentCameraFlowService, AFDMomentCameraPerformanceTrackService;

@interface CECMomentCameraSwitchModeViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraSwitchModeInterface>

@property (nonatomic) BOOL isMultiCameraMode;
@property (nonatomic) BOOL isItemHidden;
@property (nonatomic) BOOL isSwitching;
@property (nonatomic) BOOL forbidDetectingFace;
@property (nonatomic) BOOL forbidOtherUserInteraction;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)injectService;
- (void)finishSwitchingTask;
- (void)switchModeByAlert:(BOOL)a0;
- (void)excuteSwitchingTask;
- (void)trackSwitchMode:(BOOL)a0;
- (void).cxx_destruct;

@end
