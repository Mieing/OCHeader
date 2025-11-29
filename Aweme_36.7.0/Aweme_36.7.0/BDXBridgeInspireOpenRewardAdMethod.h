@interface BDXBridgeInspireOpenRewardAdMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)rewardParamsFromBridgeModel:(id)a0;
- (id)resultModelWithResultDict:(id)a0;
- (long long)authType;
- (id)methodName;

@end
