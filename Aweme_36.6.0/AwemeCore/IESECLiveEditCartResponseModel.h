@class NSDictionary, IESECLiveCartGoodsBasicInfoModel;

@interface IESECLiveEditCartResponseModel : IESECGoodsAddToCartResponse

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) IESECLiveCartGoodsBasicInfoModel *goodsBasicInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
