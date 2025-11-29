@class AWESearchAutoPlayHandler, NSString, AWESearchCachalotWebEngine, AWESearchCachalotWebConfig;
@protocol CachalotRenderPipelineComponentViewModel, AWEModernFeedCellContext;

@interface AWEGeneralSearchWebCellController : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol, AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) AWESearchCachalotWebConfig *webConfig;
@property (retain, nonatomic) AWESearchCachalotWebEngine *engine;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewDidDisappear:(BOOL)a0;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentPrepareForReuse;
- (void)startScroll;
- (id)initWithWebConfig:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)didResignActive;
- (void)viewDidLoad;
- (id)componentView;
- (id)activeView;
- (void)updateWithViewModel:(id)a0;

@end
