@class NSString, UIImage, IESLiveCommonCastScreenContainerView, UIView, UIButton;
@protocol IESLiveCastScreenViewDelegate, IESLiveVideoEffectProcessing;

@interface IESLiveCommonCastScreenView : UIView <IESLiveCommonCastScreenContainerViewDelegate>

@property (nonatomic) BOOL minimize;
@property (nonatomic) BOOL isBackToAnchorScreen;
@property (nonatomic) BOOL isCastScreening;
@property (nonatomic) BOOL isShowingElementView;
@property (nonatomic) struct CGPoint { double x; double y; } startMovePoint;
@property (nonatomic) struct CGSize { double width; double height; } smallWindowSize;
@property (nonatomic) double rightPadding;
@property (nonatomic) double bottomPadding;
@property (retain, nonatomic) IESLiveCommonCastScreenContainerView *castScreenContainer;
@property (retain, nonatomic) UIImage *imageIcon;
@property (retain, nonatomic) UIView *elementView;
@property (retain, nonatomic) UIView *smallWindowView;
@property (retain, nonatomic) UIButton *smallWindowSizeButton;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcesser;
@property (weak, nonatomic) id<IESLiveCastScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithElementView:(id)a0;
- (void)updateCommonCastScreenElementSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldHideEndButton;
- (void)switchCastScreenIfNeedClickedAction;
- (void)endCastScreenClickedAction;
- (void)showElementViewButtonClickedAction;
- (void)switchCastScreenIfNeedClickedAction:(BOOL)a0;
- (void)backToCastScreenAction:(BOOL)a0;
- (void)pullElementViewWithCompletion:(id /* block */)a0;
- (void)updateShowCastScreenButtonWithShowStatus:(BOOL)a0;
- (void)foldElementViewWithCompletion:(id /* block */)a0;
- (void)minimizeSmallWindowWithCompletion:(id /* block */)a0;
- (void)enlargeSmallWindowWithCompletion:(id /* block */)a0;
- (void)addAnchorSmallWindowIfNeed:(BOOL)a0;
- (void)removeCastScreenView;
- (BOOL)shouldShowSmallWindowView;
- (void)smallWindowChangedWithStatus:(long long)a0;
- (void)updateSmallWindowSizeClicked;
- (void)panSmallWindowGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })updateStartPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)elementViewButtonImageIfNeedFold:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })customInitializePosition;
- (void)normalizeCastScreenAction;
- (void)minimizeCastScreenAction;
- (void)endCastScreenIfDuringLiving;
- (void)setupCastScreenContainer:(id)a0;
- (void)setupSmallWindowChangedWithStatus:(long long)a0 smallWindowSize:(struct CGSize { double x0; double x1; })a1 rightPadding:(double)a2 bottomPadding:(double)a3;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)panGesture:(id)a0;

@end
