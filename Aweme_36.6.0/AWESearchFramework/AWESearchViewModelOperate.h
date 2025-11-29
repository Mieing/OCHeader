@class NSArray;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchViewModelOperate : NSObject

@property (nonatomic) unsigned long long operationType;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> root;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> anchorNode;
@property (copy, nonatomic) NSArray *operateArray;
@property (nonatomic) BOOL animate;

- (void).cxx_destruct;

@end
