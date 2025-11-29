@class UIView, NSString, AWESearchLoadingCardModel, UIImageView, AWESearchBaseShimmerView, AWESearchDualCardSkeletonView, AWESearchLoadingErrorView, LOTAnimationView, YYLabel, CAGradientLayer;
@protocol AWESearchLoadingCardViewControllerDelegate;

@interface AWESearchLoadingCardViewController : UIViewController <AWESearchCachalotCardViewProtocol, AWESearchLoadingCardViewControllerProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) YYLabel *keywordLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) LOTAnimationView *whirlView;
@property (retain, nonatomic) YYLabel *subheadLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWESearchBaseShimmerView *searchShimmerView;
@property (retain, nonatomic) AWESearchLoadingErrorView *errorView;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView1;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView2;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView3;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView4;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView5;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView6;
@property (retain, nonatomic) AWESearchLoadingCardModel *searchBarContext;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<AWESearchLoadingCardViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)themeDidChange:(id)a0;
- (void)componentWillDisplay;
- (void)componentDisplayWithTopPercentage:(double)a0 isReverse:(BOOL)a1;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)showLoadingWithAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
