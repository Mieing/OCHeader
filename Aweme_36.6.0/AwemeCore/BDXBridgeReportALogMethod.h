@interface BDXBridgeReportALogMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (int)mappedLogLevelWithLogLevel:(long long)a0;
- (id)methodName;

@end
