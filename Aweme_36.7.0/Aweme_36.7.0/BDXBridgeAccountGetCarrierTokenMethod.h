@interface BDXBridgeAccountGetCarrierTokenMethod : BDXBridgeMethod

+ (id)metaInfo;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (long long)carrierTransfer:(long long)a0;
- (long long)authType;
- (id)methodName;

@end
