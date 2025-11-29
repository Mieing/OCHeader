@class NSDictionary, IESECGoodsDetailDetailTopInfoBusinessMetaModel;

@interface IESECGoodsDetailDetailTopInfoMetaModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *trackMeta;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoBusinessMetaModel *businessMeta;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
