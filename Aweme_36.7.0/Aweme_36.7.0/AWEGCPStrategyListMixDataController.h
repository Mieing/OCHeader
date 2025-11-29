@class IESGCPPlayerTransitionContext;

@interface AWEGCPStrategyListMixDataController : AWEListDataController

@property (retain, nonatomic) IESGCPPlayerTransitionContext *context;
@property (nonatomic) long long indexOfMix;
@property (nonatomic) long long firstIndexInMixOfData;

- (id)getMixModelsWithStrategyArray:(id)a0 mixId:(id)a1 currentIndex:(long long)a2;
- (id)initWithDataManager:(id)a0 mixId:(id)a1 index:(long long)a2;
- (id)initWithGCPAwemeModels:(id)a0 mixId:(id)a1 index:(long long)a2;
- (void).cxx_destruct;

@end
