@interface IESECLiveUIConfigMerger : NSObject

+ (void)updateGoodsListHeaderLayoutModel:(id)a0 byGoodsListUIConfigStore:(id)a1;
+ (void)updateGoodsListTabSelectItemUIConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updatePromotionCardStyleConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updatePromotionCardSkinConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateBuyButtonSkinConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateIntroducingBannerSkinConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updatePriceTextConfigModel:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updatePriceDescriptionConfigModel:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateOriginalPriceTextConfigModel:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateFindSimilarButtonSkinConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateGoodsListTabSelectedConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateGoodsListTabUnselectedConfig:(id)a0 byComponentUIConfigs:(id)a1;
+ (void)updateGoodsListHeaderLayoutModelWithAvatar:(id)a0 byGoodsListUIConfigStore:(id)a1;
+ (void)updateGoodsListHeaderLayoutModelWithoutAvatar:(id)a0 byGoodsListUIConfigStore:(id)a1;

@end
