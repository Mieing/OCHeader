@interface IESECGoodsDetailHelper : NSObject

+ (void)showGoodsDetail:(id)a0;
+ (void)preRequestWithParams:(id)a0;
+ (id)requestWithSchema:(id)a0;
+ (void)addNativeParams:(id)a0;
+ (id)composeParameters:(id)a0 isPreloadRequest:(BOOL)a1;
+ (id)setupParametersWithNewRequest:(id)a0;
+ (void)registerServiceForParameters:(id)a0;
+ (void)showPDPWithRequest:(id)a0;
+ (void)reportFissionBackFlowIfNeededWithParams:(id)a0 secActivityInfo:(id)a1;
+ (void)trackReflowEvent:(id)a0;
+ (void)showCachedGoodsDetailWithParams:(id)a0 completion:(id /* block */)a1 routerCompletion:(id /* block */)a2;
+ (void)preloadWithSchemaV2:(id)a0 completion:(id /* block */)a1;
+ (void)showPdpWithSchemaBuilder:(id)a0;
+ (id)getPDPPreviewImageResultWithRequest:(id)a0;
+ (void)updateRequest:(id)a0 withPreviewImageResult:(id)a1;
+ (id)entranceInfoJSONStringFromRequest:(id)a0;
+ (id)mergedMetaParamFromMetaParams:(id)a0 entranceInfoJSONString:(id)a1;
+ (id)pdpType:(id)a0;
+ (void)trackGoodsDetailStartWithRequest:(id)a0;
+ (void)trackGoodsDetailShowWithRequest:(id)a0 status:(id)a1 extraParams:(id)a2;
+ (void)updatePreviewImageResult:(id)a0 withType:(long long)a1 request:(id)a2;
+ (id)composeRequestWithParams:(id)a0 source:(id)a1 completion:(id /* block */)a2;
+ (id)eztfEnterParams:(id)a0;
+ (void)updateRequestImageResult:(id)a0;
+ (void)showGoodsDetailWithPreview:(id)a0;
+ (id)createParametersWithRequest:(id)a0 isPreloadRequest:(BOOL)a1;
+ (void)showParams:(id)a0 from:(id)a1 qualityInfo:(id)a2 completion:(id /* block */)a3;
+ (id)parametersSetup:(id)a0;
+ (void)showLiveFloatOnTopIfNeeded:(id)a0 containerViewController:(id)a1 from:(id)a2;
+ (void)showGoodsDetailWithParams:(id)a0 source:(id)a1 completion:(id /* block */)a2;
+ (void)preloadGoodsDetailWithParams:(id)a0 completion:(id /* block */)a1;

@end
