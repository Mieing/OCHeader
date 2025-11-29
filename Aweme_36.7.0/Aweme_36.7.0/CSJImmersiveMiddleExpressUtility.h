@class CSJNativeAd, NSDictionary, CSJNativeExpressAdView, NSMutableDictionary;

@interface CSJImmersiveMiddleExpressUtility : NSObject

@property (retain, nonatomic) CSJNativeExpressAdView *expressAdView;
@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (copy, nonatomic) NSDictionary *relatedMaterialMetaJSON;
@property (retain, nonatomic) NSMutableDictionary *relatedAdAppID;

- (void)bu_getRelatedMaterialMeta;
- (void)async_handleRelateMaterWith:(id)a0 materialMetasJson:(id)a1;
- (void)bu_immersiveMiddleExpressViewWithAd:(id)a0 renderComplete:(id /* block */)a1;
- (void)bu_fetch_middleTemplateDataWithNativeAd:(id)a0;
- (void).cxx_destruct;

@end
