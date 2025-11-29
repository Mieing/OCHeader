@class NSString, MoveWithTouchAlgorithm, SightIconView, UIView, MMUIButton;
@protocol WAStreamPlayerInterface, WAFloatingVideoDelegate;

@interface WAFloatingVideoView : UIView <MoveWithTouchAlgorithmDelegate>

@property (weak, nonatomic) UIView<WAStreamPlayerInterface> *videoView;
@property (retain, nonatomic) UIView *videoParentView;
@property (retain, nonatomic) UIView *audioOnlyShadowView;
@property (weak, nonatomic) id<WAFloatingVideoDelegate> delegate;
@property (retain, nonatomic) UIView *interactiveView;
@property (retain, nonatomic) SightIconView *loadingView;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setupSubviews;
- (void)updatePlayerView:(id)a0;
- (void)showProgressViewWithProgress:(double)a0;
- (void)hideInteractiveView;
- (void)showInteractiveView;
- (BOOL)isVideoViewFloating:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)shouldLockToPortrait;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onOrientationChanged;
- (void)onVideoViewClosed;
- (void)onFloatingVideoClick;
- (void)removeVideoView;
- (id)getVideoView;
- (void).cxx_destruct;

@end
