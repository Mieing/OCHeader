@interface BDXBridgeGetIMGroupsListMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)handleGroupList:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (long long)authType;
- (id)methodName;

@end
