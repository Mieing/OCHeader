@interface BDXBridgeCampaignGetAppListMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)getInstalledAppListWithAppList:(id)a0;
- (void)tracker:(id)a0 errorCode:(long long)a1 errorDesc:(id)a2 extraTrackInfo:(id)a3;
- (id)getInstalledAppListWithSchemes:(id)a0;
- (long long)authType;
- (id)methodName;

@end
