@class UITapGestureRecognizer, CECMomentCameraTextViewModel, NSString, CECMomentCameraSwitchModeViewModel, CECMomentCameraPublishViewModel, UIButton;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, AFDMCEditService;

@interface CECMomentCameraTextEditComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, UIGestureRecognizerDelegate>

@property (retain, nonatomic) CECMomentCameraSwitchModeViewModel *switchViewModel;
@property (retain, nonatomic) CECMomentCameraPublishViewModel *publishViewModel;
@property (retain, nonatomic) CECMomentCameraTextViewModel *viewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (retain, nonatomic) UIButton *textButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapTextGesture;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (id)p_canvasBgColorForTextMode;
- (void)onTapGestureClicked:(id)a0;
- (void)showTextEditViewInView:(id)a0;
- (void)trackEnterTextEditFromPublish;
- (void)trackReEnterTextEditFromPublish;
- (void)trackTextEditFinishFromPublish;
- (void)onTextButtonTapped;
- (void)trackCameraModeChangedBackFromTextEditView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
