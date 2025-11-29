@class NSString;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEGeneralSearchCarBrandCachalotAdapterVC : AWEGeneralSearchCarBrandViewController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
