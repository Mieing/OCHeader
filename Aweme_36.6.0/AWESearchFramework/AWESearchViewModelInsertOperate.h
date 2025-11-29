@class NSArray, AWESearchCachalotResultContext;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchViewModelInsertOperate : AWESearchViewModelOperate

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> lastViewModelFather;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> splitTreeModel;
@property (copy, nonatomic) NSArray *splitChildrenArr;
@property (nonatomic) long long spliteIndex;
@property (nonatomic) unsigned long long insertRelation;
@property (nonatomic) long long insertIndex;
@property (copy, nonatomic) id /* block */ operateResultBlock;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (nonatomic) BOOL dropSplitTree;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> lastViewModel;

- (unsigned long long)operationType;
- (void).cxx_destruct;

@end
