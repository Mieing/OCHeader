@class ACCCameraSubscription, ACCRecordMode, AWEAnimatedRecordButton, NSString, UIButton;
@protocol AWECaptureButtonAnimationViewDelegate;

@interface AWECaptureButtonAnimationView : UIView <ACCCaptureButtonAnimationProtocol>

@property (nonatomic) BOOL isShowingCaptureAnimating;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) UIButton *captureButton;
@property (weak, nonatomic) UIButton *captureShowTipButton;
@property (retain, nonatomic) AWEAnimatedRecordButton *animatedRecordButton;
@property (nonatomic) BOOL isCountdowning;
@property (copy, nonatomic) id /* block */ trackRecordVideoEventBlock;
@property (weak, nonatomic) id<AWECaptureButtonAnimationViewDelegate> delegate;
@property (nonatomic) BOOL forbidUserPause;
@property (nonatomic) BOOL supportGestureWhenHidden;
@property (nonatomic) BOOL isAutoStartRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToMode:(id)a0;
- (void)updateAnimatedRecordButtonCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)switchToHoldSubtype;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeTap;
- (void)executeTouchesBeganTask;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeHold;
- (void)executeTouchesEndTask;
- (void)switchToMode:(id)a0 force:(BOOL)a1;
- (void)switchToTakePictureMode;
- (void)switchToMixHoldTapRecordMode:(id)a0;
- (void)startCountdownMode;
- (void)endCountdownModeIfNeed;
- (void)addTouchEventObserver:(id)a0;
- (void)checkNormalImageForButton:(id)a0 setAlpha:(double)a1;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)stop;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
