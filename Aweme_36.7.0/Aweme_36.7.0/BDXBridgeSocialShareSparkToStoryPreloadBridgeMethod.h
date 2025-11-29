@interface BDXBridgeSocialShareSparkToStoryPreloadBridgeMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldPreloadSparkData;
- (long long)authType;
- (id)methodName;

@end
