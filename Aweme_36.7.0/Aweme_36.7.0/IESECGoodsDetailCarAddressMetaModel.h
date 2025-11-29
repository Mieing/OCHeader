@class NSDictionary, IESECGoodsDetailCarAddressBizMeta;

@interface IESECGoodsDetailCarAddressMetaModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) IESECGoodsDetailCarAddressBizMeta *businessMeta;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
