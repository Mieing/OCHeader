@class ACCCameraSubscription, ACCRecordMode, ACCLightningRecordButton, ACCLightningRecordAnimationViewConfig, NSString;
@protocol ACCLightningRecordAnimationViewNewTouchDispatchDelegate, ACCCaptureButtonAnimationViewDelegate;

@interface ACCLightningRecordAnimationView : UIView <ACCLightningCaptureButtonAnimationProtocol>

@property (nonatomic) BOOL isShowingCaptureAnimating;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (nonatomic) double tapStartTime;
@property (nonatomic) BOOL isFromCountingMode;
@property (nonatomic) BOOL lastTapRecordBtnHasBeenBlocked;
@property (nonatomic) BOOL didEndOnTouchBegin;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCLightningRecordButton *animatedRecordButton;
@property (retain, nonatomic) ACCLightningRecordAnimationViewConfig *config;
@property (weak, nonatomic) id<ACCLightningRecordAnimationViewNewTouchDispatchDelegate> touchDispatchDelegate;
@property (nonatomic) BOOL mainRecorderEnter;
@property (weak, nonatomic) id<ACCCaptureButtonAnimationViewDelegate> delegate;
@property (nonatomic) BOOL isCountdowning;
@property (copy, nonatomic) id /* block */ trackRecordVideoEventBlock;
@property (nonatomic) BOOL forbidUserPause;
@property (nonatomic) BOOL supportGestureWhenHidden;
@property (nonatomic) BOOL isAutoStartRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToMode:(id)a0;
- (void)updateAnimatedRecordButtonCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)stopWithIgnoreProgress:(BOOL)a0;
- (void)switchToHoldSubtype;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeTap;
- (void)executeTouchesBeganTask;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeHold;
- (void)executeTouchesEndTask;
- (BOOL)recordModeIsStandVideo:(id)a0;
- (BOOL)recordModeIsLongVideo:(id)a0;
- (void)switchToMode:(id)a0 force:(BOOL)a1;
- (void)switchToTakePictureMode;
- (void)switchToMixHoldTapRecordMode:(id)a0;
- (void)startCountdownMode;
- (void)endCountdownModeIfNeed;
- (void)updateRecordButtonState:(BOOL)a0;
- (BOOL)isSwitchVideoLengthOnly:(id)a0;
- (void)addTouchEventObserver:(id)a0;
- (void)switchMixSubtypeToTap;
- (BOOL)enableNewDispatch;
- (void)switchToScanToScanMode;
- (void)switchToMomentCamera;
- (void)executeStartRecordTask;
- (void)executeStopRecordTask;
- (void)executeTakePictureTask;
- (void)updateStateFromButtonService:(long long)a0;
- (void)updateMixSubtypeFromButtonService:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)vibrate;

@end
