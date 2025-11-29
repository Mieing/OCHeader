@interface AWEIMXBridgeImFetchDeletedChatsMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)fetchUIDataIfNeededWithModel:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
