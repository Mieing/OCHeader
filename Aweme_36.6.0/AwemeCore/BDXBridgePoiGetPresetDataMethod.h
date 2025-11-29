@interface BDXBridgePoiGetPresetDataMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)sendAlogOnStart:(id)a0;
- (void)sendAlogOnEnd:(id)a0 resultModel:(id)a1;
- (id)convertImageModelToReturnModel:(id)a0 index:(long long)a1;
- (id)convertMaterialModelToReturnModel:(id)a0 index:(long long)a1;
- (long long)authType;
- (id)methodName;

@end
