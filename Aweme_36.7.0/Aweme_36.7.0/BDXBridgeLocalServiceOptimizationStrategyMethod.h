@interface BDXBridgeLocalServiceOptimizationStrategyMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)preloadAndPreDownloadWithParaModel:(id)a0 resultModel:(id)a1 completionHandler:(id /* block */)a2;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)iesll_preloadAndPreDownloadWithParaModel:(id)a0 resultModel:(id)a1 completionHandler:(id /* block */)a2;
- (long long)authType;
- (id)methodName;

@end
