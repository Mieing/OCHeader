@class AWEIMCodeGenStrategyDynamicActionbarResponseModel, NSString;

@interface AWEIMActionbarStrategyDynamicComponent : AWEIMComponentBase <AWEIMActionbarStrategyDynamicInterface>

@property (retain, nonatomic) AWEIMCodeGenStrategyDynamicActionbarResponseModel *cachedModel;
@property (nonatomic) BOOL didFetchDynamicData;
@property (nonatomic) double updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)applyDynamicStrategyIfNeededWithConfig:(id)a0;
- (void)fetchDynamicDataWithCurrentConfig:(id)a0;
- (id)p_dynamicModelCacheKey;
- (void)p_applyCacheModelIfNeeded:(id)a0 toItems:(id)a1 config:(id)a2;
- (id)p_mergeWithItems:(id)a0 dynamicModel:(id)a1;
- (void)p_reconfigAcbWithConfig:(id)a0 buttons:(id)a1;
- (void)p_requestDynamicWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_shouldPassInKeyword;
- (id)p_keywordToRequestEmojiRecommendWithButtons:(id)a0;
- (void)p_preprocessButtonConfigs:(id)a0 dynamicModel:(id)a1;
- (void).cxx_destruct;

@end
