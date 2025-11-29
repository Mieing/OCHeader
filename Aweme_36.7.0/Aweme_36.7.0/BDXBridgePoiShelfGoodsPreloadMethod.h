@interface BDXBridgePoiShelfGoodsPreloadMethod : BDXBridgeMethod

+ (id)metaInfo;

- (void)publishEvent:(id)a0;
- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)preloadConfig;
- (id)preloadInfo;
- (void)setPreloadInfo:(id)a0;
- (void)registerPitayaPOIShelfEvent;
- (BOOL)pitayaEnable;
- (BOOL)containSpuItem:(id)a0 inPitayaProductList:(id)a1;
- (void)invokeGoodsPreload:(id)a0 preloadModel:(id)a1 logParams:(id)a2;
- (BOOL)isAvailableBizCode:(id)a0;
- (long long)authType;
- (id)init;
- (void)dealloc;
- (id)methodName;

@end
