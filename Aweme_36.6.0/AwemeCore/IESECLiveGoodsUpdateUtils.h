@interface IESECLiveGoodsUpdateUtils : NSObject

+ (id)stringArrayFromPBIntArray:(id)a0;
+ (id)updateedGoodsModelWithPromotionID:(long long)a0 inGoodsViewModels:(id)a1;
+ (id)updatedGoodsModelsWithIdsArray:(id)a0 inGoodsViewModes:(id)a1;
+ (id)indexPathsOfGoodsViewModes:(id)a0 productIdsArray:(id)a1 passingTest:(id /* block */)a2;
+ (id)IDsOfQueryType:(long long)a0 IDType:(long long)a1 inGoodsViewModes:(id)a2;
+ (id)indexPathOfGoodsViewModes:(id)a0 promotionID:(id)a1 passingTest:(id /* block */)a2;
+ (id)goodsModelIDMapFromGoodsList:(id)a0 IDType:(long long)a1;
+ (id)goodsModelIDMapFromGoodsViewModes:(id)a0 IDType:(long long)a1;
+ (id)IDsOfQueryType:(long long)a0 IDType:(long long)a1 inModelList:(id)a2;
+ (id)updatedGoodsModelsWithIdsArray:(id)a0 inGoodsModelList:(id)a1;
+ (id)indexPathsOfGoodsModelList:(id)a0 productIdsArray:(id)a1 passingTest:(id /* block */)a2;
+ (id)modelWithID:(id)a0 andIDType:(long long)a1 inModelList:(id)a2;

@end
