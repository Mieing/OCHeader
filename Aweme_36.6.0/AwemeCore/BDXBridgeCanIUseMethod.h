@interface BDXBridgeCanIUseMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)propertiesForModelClass:(Class)a0;
- (id)methodName;

@end
