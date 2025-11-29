@class UIView, UILongPressGestureRecognizer, NSString, AWEUserRecommendBigCardViewModel, AWEBinding, UIImageView, CAGradientLayer, AWEUserRecommendBigCardView, UIViewController, AWEUserRecommendBigCardFooterView;
@protocol AWEAwemeLongPressModalViewControllerProtocol, AWEUserRecommendBigCardContainerViewDelegate;

@interface AWEUserRecommendBigCardContainerView : UIView <CAAnimationDelegate, AWEZoomTransitionOuterContextProvider, AWEUserRecommendBigCardContainerView>

@property (retain, nonatomic) AWEUserRecommendBigCardViewModel *viewModel;
@property (retain, nonatomic) AWEUserRecommendBigCardView *cardView;
@property (retain, nonatomic) AWEUserRecommendBigCardFooterView *footerView;
@property (retain, nonatomic) AWEBinding *currentModelBinding;
@property (retain, nonatomic) AWEBinding *preloadModelBinding;
@property (retain, nonatomic) AWEBinding *followStatusObserver;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIView *fadeContainerView;
@property (retain, nonatomic) UIView *gradientBGView;
@property (retain, nonatomic) UIImageView *defaultBGView;
@property (retain, nonatomic) CAGradientLayer *gradientBGLayer;
@property (retain, nonatomic) CAGradientLayer *shadowBGLayer;
@property (retain, nonatomic) UIView *slideUpHintView;
@property (nonatomic) BOOL isCardDisplaying;
@property (nonatomic) long long lastSelectedAwemeCellIndex;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressViewController;
@property (weak, nonatomic) id<AWEUserRecommendBigCardContainerViewDelegate> delegate;
@property (nonatomic) BOOL showsSlideUpHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEUserRecommendBigCardContainerViewCommonAdapterClass;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)aAWEPadModuleAdapter;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_longPress:(id)a0;
- (void)configAndDisplayCell;
- (double)bottomUnsafeAreaHeight;
- (void)p_applicationDidBecomeActiveNotification:(id)a0;
- (void)p_animateSlideUpHintView;
- (void)p_updateFootView;
- (id)aAWEUserRecommendBigCardContainerViewCommonAdapter;
- (void)updateFollowButtonTextWithUser:(id)a0;
- (double)p_footerViewBottomPadding;
- (void)configWithViewModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end
