@class CAGradientLayer, NSString, NSTimer, AWESearchDualCardSkeletonView;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchDoubleWaterfallSkeletonCardViewController : UIViewController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView1;
@property (retain, nonatomic) AWESearchDualCardSkeletonView *cardSkeletonView2;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> bindViewModel;
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
- (void)removeSkeletonView;
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
