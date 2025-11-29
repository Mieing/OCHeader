@interface BDXBridgeChooseMediaMethod : BDXBridgeMethod

+ (id)requiredKeyPaths;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)chooseMediaWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (id)defaultMediaPicker;
- (long long)authType;
- (id)methodName;

@end
