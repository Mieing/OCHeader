@interface BDXBridgePrerendererMethod : BDXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)getPageContext;
- (unsigned long long)engineTypes;
- (long long)authType;
- (id)methodName;

@end
