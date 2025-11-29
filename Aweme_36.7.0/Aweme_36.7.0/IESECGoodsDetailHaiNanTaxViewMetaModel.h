@class NSDictionary, NSString, IESECGoodsDetailHaiNanTaxViewBusinessMetaModel;

@interface IESECGoodsDetailHaiNanTaxViewMetaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *trackMetaParams;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTaxViewBusinessMetaModel *businessMetaParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
