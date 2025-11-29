@class ACCCameraSubscription, CMCRecordMode, NSString, CMCLightningRecordAnimationViewConfig, CMCLightningRecordButton;
@protocol CMCCaptureButtonAnimationViewDelegate;

@interface CMCLightningRecordAnimationView : UIView <CMCLightningCaptureButtonAnimationProtocol>

@property (nonatomic) BOOL isShowingCaptureAnimating;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (nonatomic) double tapStartTime;
@property (nonatomic) BOOL isFromCountingMode;
@property (nonatomic) BOOL lastTapRecordBtnHasBeenBlocked;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL didEndOnTouchBegin;
@property (retain, nonatomic) CMCLightningRecordButton *animatedRecordButton;
@property (retain, nonatomic) CMCLightningRecordAnimationViewConfig *config;
@property (weak, nonatomic) id<CMCCaptureButtonAnimationViewDelegate> delegate;
@property (nonatomic) BOOL isCountdowning;
@property (copy, nonatomic) id /* block */ trackRecordVideoEventBlock;
@property (nonatomic) BOOL forbidUserPause;
@property (nonatomic) BOOL supportGestureWhenHidden;
@property (nonatomic) BOOL isAutoStartRecord;
@property (nonatomic) BOOL animationEnabled;
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
- (void)p_performBeforeSwitchMeteorModeAnimation;
- (void)switchToTakePictureMode;
- (void)switchToMixHoldTapRecordMode:(id)a0;
- (void)startCountdownMode;
- (void)endCountdownModeIfNeed;
- (void)updateRecordButtonState:(BOOL)a0;
- (BOOL)isSwitchVideoLengthOnly:(id)a0;
- (void)switchToLivePhotoMode;
- (void)addTouchEventObserver:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
