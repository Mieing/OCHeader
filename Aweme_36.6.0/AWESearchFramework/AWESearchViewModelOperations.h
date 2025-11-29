@class NSArray;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchViewModelOperations : NSObject

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> splitTreeModel;
@property (copy, nonatomic) NSArray *splitChildrenArr;
@property (nonatomic) long long spliteIndex;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> root;
@property (copy, nonatomic) NSArray *operateActionArray;
@property (copy, nonatomic) id /* block */ operateResultBlock;
@property (nonatomic) BOOL animate;

- (void).cxx_destruct;

@end
