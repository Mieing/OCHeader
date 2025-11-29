@class NSString, ACCSocialCameraAnimatorContext, _TtC9CameraKit10CameraView, AWESwitchRecordModeView;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCSocialCameraAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (readonly, nonatomic) _TtC9CameraKit10CameraView *cameraView;
@property (retain, nonatomic) AWESwitchRecordModeView *switchModeView;
@property (retain, nonatomic) ACCSocialCameraAnimatorContext *context;
@property (nonatomic) BOOL isPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentAnimateTransitionWithPreviewMask:(id)a0;
- (void)dismissAnimateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;

@end
