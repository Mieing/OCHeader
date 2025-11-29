@interface AWEUGXBridgeCampaignPostInteractionMessageMethod : BDXBridgeMethod

+ (id)frequencyDict;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)callbackWithCompletion:(id /* block */)a0 result:(id)a1 status:(id)a2 enterMethod:(id)a3 name:(id)a4;
- (void)getIdFromParam:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
