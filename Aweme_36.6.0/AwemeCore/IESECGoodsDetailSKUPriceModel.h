@class NSString, IESECPriceElement;

@interface IESECGoodsDetailSKUPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *specID;
@property (retain, nonatomic) IESECPriceElement *priceElement;
@property (retain, nonatomic) IESECPriceElement *marketPriceElement;
@property (retain, nonatomic) IESECPriceElement *discountPriceElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
