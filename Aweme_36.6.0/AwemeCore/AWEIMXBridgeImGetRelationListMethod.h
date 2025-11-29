@interface AWEIMXBridgeImGetRelationListMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)__handleRelationListResult:(id)a0;
- (id)__notDeletedUserOrConvWithData:(id)a0;
- (long long)authType;
- (id)methodName;

@end
