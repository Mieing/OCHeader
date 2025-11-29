@class NSString, IESLiveChatChannelLinkmicVolumeView, HTSEventForwardingView, IESLiveGCDTimer, UIButton;

@interface IESLiveChatChannelLinkmicFloatingStatusView : HTSEventForwardingView <CAAnimationDelegate>

@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) UIButton *hiddenView;
@property (retain, nonatomic) UIButton *volumeViewContainer;
@property (retain, nonatomic) IESLiveChatChannelLinkmicVolumeView *volumeView;
@property (nonatomic) long long status;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ onUnfoldBlock;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isDragging;
@property (retain, nonatomic) IESLiveGCDTimer *autoHiddenTimer;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic, getter=isDragEnabled) BOOL dragEnable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragSafeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMute:(BOOL)a0;
- (void)showWithAnimation:(BOOL)a0;
- (void)onUnfold:(id /* block */)a0;
- (void)stopAutoHiddenTimer;
- (void)volumeClickAction:(id)a0;
- (void)hiddenClickAction:(id)a0;
- (void)setStatus:(long long)a0 animated:(BOOL)a1;
- (BOOL)isLeftBoundarySitcking:(struct CGPoint { double x0; double x1; })a0;
- (void)updateConstraintsWithCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)volumeViewTranslationX;
- (double)hiddenViewTranslationX;
- (double)volumeViewTranslationXWithStatus:(long long)a0;
- (double)hiddenViewTranslationXWithStatus:(long long)a0;
- (void)updateVolumeViewUIWithCurrentStatus;
- (void)updateHiddenViewUIWithCurrentStatus;
- (void)updateHiddenStatus:(BOOL)a0 animated:(BOOL)a1;
- (void)autoHiddenAfter:(double)a0;
- (void)updateCenterAfterDragging:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)updateVolume:(double)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)updateConstraints;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;
- (void)updateStyle:(long long)a0;
- (void)show;
- (void)handlePanGesture:(id)a0;
- (void)onTap:(id /* block */)a0;

@end
