@class UIView, AWEMateBigCardViewModel, NSString, UIImageView, AWEBinding, NSDictionary, CAGradientLayer, AWEMateBigCardView, MASConstraint, AWEUserRecommendBigCardFooterView;
@protocol AWEMateBigCardPanelViewDelegate;

@interface AWEMateBigCardContainerView : UIView <CAAnimationDelegate, AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) AWEMateBigCardViewModel *viewModel;
@property (retain, nonatomic) AWEMateBigCardView *cardView;
@property (retain, nonatomic) AWEUserRecommendBigCardFooterView *footerView;
@property (retain, nonatomic) AWEBinding *currentModelBinding;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIView *fadeContainerView;
@property (retain, nonatomic) UIView *gradientBGView;
@property (retain, nonatomic) UIImageView *defaultBGView;
@property (retain, nonatomic) CAGradientLayer *gradientBGLayer;
@property (retain, nonatomic) CAGradientLayer *shadowBGLayer;
@property (retain, nonatomic) UIView *slideUpHintView;
@property (retain, nonatomic) MASConstraint *cardViewHeightConstraint;
@property (nonatomic) BOOL isCardDisplaying;
@property (nonatomic) long long lastSelectedAwemeCellIndex;
@property (retain, nonatomic) AWEBinding *followStatusObserver;
@property (weak, nonatomic) id<AWEMateBigCardPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)configAndDisplayCell;
- (void)updateFooterView:(unsigned long long)a0;
- (void)updateFooterViewAfterFollow;
- (void)configWithViewModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end
