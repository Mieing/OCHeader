@class AWEMRBlockComponentModel;
@protocol AWEMessageReachMaterialAbilityProtocol;

@interface AWEMessageReachBlockComponentManager : NSObject

@property (weak, nonatomic) id<AWEMessageReachMaterialAbilityProtocol> materialAbility;
@property (retain, nonatomic) AWEMRBlockComponentModel *cacheBlockComponentModel;

- (long long)getPendingTimeWithBlockModel:(id)a0;
- (void)clearAllCacheComponentModelWithComponentStatus:(id)a0;
- (void)trackMessageReachDelayShowDurationWithBlockBubbleModel:(id)a0 resultModel:(id)a1;
- (void)trackMessageReachDelayShowDurationWithBlockBadgeModel:(id)a0 resultModel:(id)a1;
- (void)trackMessageReachDelayShowDurationWithBlockComponentModel:(id)a0 extra:(id)a1 reshowResult:(long long)a2;
- (id)initWithMaterialAbility:(id)a0;
- (void)recordDelayShowComponentDurationWithModel:(id)a0;
- (void)handleDelayedBlockComponentWithSource:(long long)a0;
- (id)generateBubbleDelayShowDataWithModel:(id)a0 paramContext:(id)a1 resultModel:(id)a2 retryType:(long long)a3 originShowCallback:(id /* block */)a4;
- (id)generateBadgeDelayShowDataWithModel:(id)a0 paramContext:(id)a1 result:(id)a2 retryType:(long long)a3 originShowCallback:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
