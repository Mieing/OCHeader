@class UIImageView, NSTimer, NSString;
@protocol CachalotRenderPipelineComponentViewModel, AWEModernFeedCellContext;

@interface AWESearchAIGCVideoSkeletonView : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UIImageView *skeletonImageView;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)isFullPageGeneralSearch;
+ (BOOL)enableOptAIGCVideoSkeletonView;

- (void)componentWillDisplay;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)removeSkeletonView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
