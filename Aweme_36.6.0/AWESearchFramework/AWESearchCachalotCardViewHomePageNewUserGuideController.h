@class NSString, AWESearchCachalotCardViewHomePageNewUserGuideView, NSObject;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchCachalotCardViewHomePageNewUserGuideController : UIViewController <CachalotMessageHandler, AWESearchCachalotCardViewHomePageNewUserGuideViewDelegate, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchCachalotCardViewHomePageNewUserGuideView *contentView;
@property (retain, nonatomic) NSObject<CachalotRenderPipelineComponentViewModel> *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)themeDidChange:(id)a0;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)handleMessage:(id)a0 callback:(id /* block */)a1;
- (void)didSelectQuery:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
