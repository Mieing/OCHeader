@class NSString, CAShapeLayer, MMLiveTaskId, UIView, UIPanGestureRecognizer;

@interface MMLiveHalfScreenPanelView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *maskingView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double contentViewTopAtPanBegin;
@property (nonatomic) double contentViewPreviousPanPositionY;
@property (nonatomic) BOOL isOpening;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onHalfScreenPanelLightDismissed;
- (void)closeWithAnimation:(BOOL)a0;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)onPanGestureRecognizerBegan;
- (void)onHalfScreenPanelOpened;
- (void)onHalfScreenPanelClosed;
- (BOOL)shouldInstallContentViewPanGesture;
- (void)setContentViewBackground;
- (void)initContentView;
- (void)layoutHalfScreenContentView;
- (void)handleContentViewPanGesture:(id)a0;
- (void)layoutSubviews;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
