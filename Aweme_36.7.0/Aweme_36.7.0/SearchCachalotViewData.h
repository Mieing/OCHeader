@class NSDictionary;
@protocol CachalotRenderPipelineComponentViewModel;

@interface SearchCachalotViewData : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;

- (void).cxx_destruct;

@end
