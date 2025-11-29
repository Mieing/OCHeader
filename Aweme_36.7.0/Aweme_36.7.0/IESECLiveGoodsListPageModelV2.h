@class NSArray, IESECLivePromotionLayoutModel, IESECLiveGoodsModelV2;

@interface IESECLiveGoodsListPageModelV2 : IESECLiveGoodsListPageModel

@property (retain, nonatomic) IESECLivePromotionLayoutModel *promotionLayout;
@property (retain, nonatomic) NSArray *goodsList;
@property (retain, nonatomic) IESECLiveGoodsModelV2 *introducingGoodsModel;
@property (retain, nonatomic) IESECLiveGoodsModelV2 *relatedInfoGoodsModel;
@property (retain, nonatomic) NSArray *targetFlashGoodsModels;
@property (retain, nonatomic) NSArray *recommendGoodsModels;

+ (id)goodsListJSONTransformer;
+ (id)targetFlashGoodsModelsJSONTransformer;
+ (id)recommendGoodsModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
