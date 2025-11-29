@class NSString, IESECGoodsPOIModel;

@interface IESECGoodsDetailCarAddressBizMeta : IESECBaseApiModel

@property (copy, nonatomic) NSString *selectedShopID;
@property (copy, nonatomic) NSString *linkURL;
@property (retain, nonatomic) IESECGoodsPOIModel *poiInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
