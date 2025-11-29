@class NSString, AWESearchAutoPlayHandler;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEGeneralSearchVideoCardCachalotAdapterVC : AWEGeneralSearchVideoCardViewController <AWESearchCachalotCardViewProtocol, AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)componentWillDisplay;
- (BOOL)shouldNotActive;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (BOOL)hasVideo;
- (void)didResignActive;
- (id)componentView;
- (id)activeView;
- (void)updateWithViewModel:(id)a0;

@end
