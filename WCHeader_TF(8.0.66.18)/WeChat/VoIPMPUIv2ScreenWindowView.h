@class VoIPMPUIv2View, VoIPMPUIv2ScreenProfileView, CAShapeLayer, VoIPMPUIv2TouchAlgorithm, XImageViewRenderer, VoIPMPUIv2ImageView, NSString;

@interface VoIPMPUIv2ScreenWindowView : VoIPMPUIv2View <VoIPMPUIv2TouchAlgorithmDelegate>

@property (retain, nonatomic) VoIPMPUIv2TouchAlgorithm *touchAlgorithm;
@property (nonatomic) BOOL canMove;
@property (nonatomic) BOOL isTalking;
@property (retain, nonatomic) VoIPMPUIv2View *canvasView;
@property (retain, nonatomic) XImageViewRenderer *renderer;
@property (retain, nonatomic) VoIPMPUIv2ScreenProfileView *profileView;
@property (retain, nonatomic) VoIPMPUIv2View *blurView;
@property (nonatomic) BOOL isFliping;
@property (retain, nonatomic) VoIPMPUIv2View *restoreTopView;
@property (retain, nonatomic) VoIPMPUIv2ImageView *restoreTopIconImageView;
@property (nonatomic) BOOL isRestoreTopViewHidden;
@property (retain, nonatomic) VoIPMPUIv2View *restoreBottomView;
@property (retain, nonatomic) VoIPMPUIv2ImageView *restoreBottomIconImageView;
@property (nonatomic) BOOL isRestoreBottomViewHidden;
@property (retain, nonatomic) CAShapeLayer *arrowLayer;
@property (nonatomic) unsigned long long foldEdge;
@property (nonatomic) unsigned long long splitLocation;
@property (nonatomic) BOOL isSuspend;
@property (copy, nonatomic) id /* block */ onTapEvent;
@property (copy, nonatomic) id /* block */ onRestoreEvent;
@property (copy, nonatomic) id /* block */ willMoveEvent;
@property (copy, nonatomic) id /* block */ onMoveEvent;
@property (copy, nonatomic) id /* block */ didMoveEvent;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } originalTransform;
@property (nonatomic) BOOL isFloated;
@property (nonatomic) BOOL isAudioInterruption;
@property (nonatomic) BOOL isCallee;
@property (nonatomic) BOOL isMirror;
@property (nonatomic) BOOL isRendered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAudioInterruption:(BOOL)a0;
- (void)setupSuspend:(BOOL)a0;
- (void)flipWithCompletion:(id /* block */)a0;
- (void)layoutBlurView;
- (void)layoutProfileView;
- (void)layoutCanvasView;
- (void)loadRender;
- (void)VoIPMPUIv2TouchAlgorithmOnBegin;
- (void)VoIPMPUIv2TouchAlgorithmOnEndWithOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)VoIPMPUIv2TouchAlgorithmOnMoveWithOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)VoIPMPUIv2TouchAlgorithmOnTaped:(struct CGPoint { double x0; double x1; })a0;
- (id)VoIPMPUIv2TouchAlgorithmView;
- (struct CGPoint { double x0; double x1; })VoIPMPUIv2TouchAlgorithmTransformPointWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)VoIPMPUIv2TouchAlgorithmIsFoldEnabled;
- (BOOL)ignoreTouches:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adsorbToWindow;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
