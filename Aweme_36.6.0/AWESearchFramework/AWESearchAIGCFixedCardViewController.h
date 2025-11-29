@class NSString, AWESearchAIGCFixedCardView;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCFixedCardViewController : UIViewController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchAIGCFixedCardView *fixedView;
@property (nonatomic) double lastHeight;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)themeDidChange:(id)a0;
- (void)clickToDetail;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
