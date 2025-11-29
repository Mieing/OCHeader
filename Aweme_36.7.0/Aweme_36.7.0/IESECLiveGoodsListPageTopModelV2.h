@class NSNumber, IESECLiveGoodsModelV2;

@interface IESECLiveGoodsListPageTopModelV2 : IESECLiveGoodsListPageTopModel

@property (retain, nonatomic) IESECLiveGoodsModelV2 *topGoodsModel;
@property (retain, nonatomic) NSNumber *serverTime;

+ (id)tabModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
