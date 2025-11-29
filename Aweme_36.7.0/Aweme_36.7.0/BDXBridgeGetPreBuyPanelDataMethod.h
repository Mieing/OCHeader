@interface BDXBridgeGetPreBuyPanelDataMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)getIapBillPageCacheDataWithBusinessId:(id)a0;
- (long long)authType;
- (id)methodName;

@end
