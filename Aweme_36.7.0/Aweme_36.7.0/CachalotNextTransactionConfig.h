@class NSArray;
@protocol CachalotRenderPipelineComponentViewModel;

@interface CachalotNextTransactionConfig : NSObject

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> root;
@property (copy, nonatomic) NSArray *operations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
