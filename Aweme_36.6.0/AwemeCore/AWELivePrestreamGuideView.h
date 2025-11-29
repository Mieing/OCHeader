@class UIImageView, CAShapeLayer, UIView, AWELiveFeedStatusViewModel, AWELiveFeedStatusLabel;

@interface AWELivePrestreamGuideView : UIView

@property (retain, nonatomic) AWELiveFeedStatusViewModel *viewModel;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UIImageView *landscapeImageView;
@property (retain, nonatomic) UIView *landscapeContainer;
@property (retain, nonatomic) UIView *lableContainer;
@property (retain, nonatomic) AWELiveFeedStatusLabel *centerLabel;
@property (retain, nonatomic) AWELiveFeedStatusLabel *nextAnimationLable;
@property (retain, nonatomic) CAShapeLayer *degradeBreathLayer;
@property (nonatomic) BOOL needResetAutoEnterStyle;
@property (nonatomic) BOOL lastLandscapeStatus;
@property (nonatomic) BOOL animationOptimize;
@property (nonatomic) BOOL hasRendered;

- (void)bindViewModel:(id)a0;
- (void)removeAllAnimation;
- (id)liveStatusTipLabel;
- (BOOL)isShowingAutoEnterAnimation;
- (void)startStatusLabelAnimationIfNeeded;
- (void)resetUIState;
- (void)removeAutoEnter;
- (void)stopStatusLabelAnimation;
- (void)clearStatusLabelAnimation;
- (void)startAutoEnterAnimation:(id /* block */)a0 cancelAction:(id /* block */)a1 roomID:(id)a2 duration:(long long)a3;
- (void)updateShowingAutoEnterAnimationState:(BOOL)a0;
- (void)beginNewAutoEnter;
- (void)startNewAutoEnterAnimating:(BOOL)a0;
- (void)resetNewAutoEnterState;
- (BOOL)allowDegradeBreathAnimation;
- (void)seupUI;
- (void)setupAniOptimize;
- (void)bindXLiveObserveWithViewModel:(id)a0;
- (void)bindRACObserveWithViewModel:(id)a0;
- (void)hideDegradeBreathLayer;
- (void)showDegradeBreathLayer;
- (void)startWeakEntranceBgAnimation;
- (void)updateLandscapeContainer:(BOOL)a0;
- (void)updateLandscapeLayoutIfNeed:(BOOL)a0;
- (struct CGSize { double x0; double x1; })landscapeContainerSize;
- (void)updateLandscapeLayout;
- (void)updateNormalLayout;
- (void)p_addNextCenterLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)updateWithStyle:(long long)a0;

@end
