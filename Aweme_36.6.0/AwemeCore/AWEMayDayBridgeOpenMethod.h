@interface AWEMayDayBridgeOpenMethod : BDXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldUseCampaignMemoryStrategy;
- (id)__findCurrentContainer;
- (void)handleOpenSchema:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceLandToFeed;
- (long long)authType;
- (id)methodName;

@end
