@interface BDXBridgeOpenMethod : BDXBridgeMethod

+ (void)finishAllWithParamModel:(id)a0 openStatus:(id)a1 closeStatus:(id)a2 otherCategory:(id)a3 startTime:(double)a4;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
