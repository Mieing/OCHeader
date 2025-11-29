@class MinimizeTaskData, MinimizeTaskContainerMoveContext, NSString, UIImageView, MMUIView, UIVisualEffectView, MoveWithTouchAlgorithm, MMTimer;
@protocol MinimizeStarFloatingViewDelegate;

@interface MinimizeStarFloatingView : UIView <MoveWithTouchAlgorithmDelegate, IMiniMizeUserdRecordUpdateExt, MMUIViewControllerExt> {
    BOOL m_recordFloatingMoveImg;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } origiFrame;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) MMTimer *countdownTimer;
@property (retain, nonatomic) MMTimer *changeStatuTimer;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm;
@property (retain, nonatomic) MinimizeTaskContainerMoveContext *originMoveContext;
@property (nonatomic) BOOL animatedForAdsorbToWindow;
@property (nonatomic) double animateDurationForAdsorbToWindow;
@property (nonatomic) long long animationSerial;
@property (weak, nonatomic) id<MinimizeStarFloatingViewDelegate> delegate;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (nonatomic) unsigned long long genFloatingTime;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL isIdleState;
@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutSubviews;
- (void)showFloating;
- (void)showAndResetTimer;
- (void)startChangeStatuTimer;
- (void)stopChangeStatusTimer;
- (void)didStopCountdown;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onOrientationChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)animationToValueForViewsWhenMoveEndsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustAfterAdsorbToWindowWithNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAutoresizingMask;
- (double)topSafeAreaLength;
- (double)bottomSafeAreaLength;
- (double)floatViewScreenWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })realSafeAreaInsetsOfWindow;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjuestRealSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)onCountdownTimer:(id)a0;
- (void)onChangeStatuTimer:(id)a0;
- (void)checkUpdateShowingState:(id)a0 animated:(BOOL)a1;
- (void)MMUIViewControllerWillAppear:(id)a0;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (BOOL)canShowStarFloatingAt:(id)a0;
- (void)onRemoveMinimizedTaskData:(id)a0;
- (BOOL)shouldLockToPortrait;
- (void)onMoveBeginWithTouchAlgorithmBegin:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0 Touch:(id)a1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithnMoveEnd:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)reportParams;
- (void)reportFloatingOpen;
- (void)reportFloatingClose:(BOOL)a0;
- (void).cxx_destruct;

@end
