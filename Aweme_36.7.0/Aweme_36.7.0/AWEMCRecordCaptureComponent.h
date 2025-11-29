@class AWEMCRecordCaptureViewModel, NSString, UIView, CMCLightningRecordAnimationView, UILabel;
@protocol AFDMomentCameraFlowService, AFDMomentContextService, AFDMomentCameraService;

@interface AWEMCRecordCaptureComponent : AFDMomentCameraBaseComponent <CMCCaptureButtonAnimationViewDelegate, AFDMomentCameraLifeCircleEvent, CMCRecorderEvent>

@property (retain, nonatomic) UIView *fakeCaptureButton;
@property (retain, nonatomic) CMCLightningRecordAnimationView *animationView;
@property (retain, nonatomic) AWEMCRecordCaptureViewModel *viewModel;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *bubbleAnchor;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)componentDidLoad;
- (void)componentDidLayoutSubviews;
- (double)p_maxDuration;
- (void)tipShowCountAdd;
- (double)tipShowCount;
- (BOOL)animationShouldBegin:(id)a0;
- (void)animationDidBegin:(id)a0;
- (void)animationDidEnd:(id)a0;
- (void)animationDidMoved:(struct CGPoint { double x0; double x1; })a0;
- (void)touchBeginWithAnimationDisabled:(id)a0;
- (BOOL)shouldRespondsToAnimationDidEnd:(id)a0;
- (void)animationViewDidReceiveTap;
- (BOOL)canTakePhotoWithTap;
- (BOOL)needBlockAnimationTouches:(id)a0;
- (BOOL)isTapAndHoldToRecordCase;
- (void).cxx_destruct;

@end
