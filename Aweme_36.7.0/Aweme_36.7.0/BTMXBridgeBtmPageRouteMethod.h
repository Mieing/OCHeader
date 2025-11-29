@interface BTMXBridgeBtmPageRouteMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)supportedTypes;
- (id)methodName;

@end
