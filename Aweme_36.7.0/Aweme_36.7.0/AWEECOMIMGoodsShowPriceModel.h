@class NSString;

@interface AWEECOMIMGoodsShowPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showAmount;
@property (copy, nonatomic) NSString *priceSuffix;
@property (copy, nonatomic) NSString *pricePreffix;
@property (copy, nonatomic) NSString *priceLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
