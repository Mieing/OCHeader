@class IESECLiveGoodsModel, NSNumber;

@interface IESECLiveGoodsListPageTopModelV1 : IESECLiveGoodsListPageTopModel

@property (retain, nonatomic) IESECLiveGoodsModel *topGoodsModel;
@property (retain, nonatomic) NSNumber *serverTime;

+ (id)tabModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
