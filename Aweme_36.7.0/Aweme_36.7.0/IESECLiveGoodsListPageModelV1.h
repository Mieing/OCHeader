@class NSArray, IESECLiveGoodsModel;

@interface IESECLiveGoodsListPageModelV1 : IESECLiveGoodsListPageModel

@property (retain, nonatomic) NSArray *goodsList;
@property (retain, nonatomic) IESECLiveGoodsModel *introducingGoodsModel;
@property (retain, nonatomic) IESECLiveGoodsModel *relatedInfoGoodsModel;
@property (retain, nonatomic) NSArray *targetFlashGoodsModels;
@property (retain, nonatomic) NSArray *recommendGoodsModels;

+ (id)goodsListJSONTransformer;
+ (id)targetFlashGoodsModelsJSONTransformer;
+ (id)recommendGoodsModelsJSONTransformer;

- (void).cxx_destruct;

@end
