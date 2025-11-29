@interface CSJExpressEndcardViewModel : CSJExpressRewardFullScreenVM

+ (void)getMRelatedMaterialMetaWithSlot:(id)a0 materialMeta:(id)a1 resultBlock:(id /* block */)a2;

- (void)getMRelatedMaterialMeta;
- (id)initViewModelWithExpressAdView:(id)a0 nativeAd:(id)a1 rootViewController:(id)a2;
- (void)vmLoadData;

@end
