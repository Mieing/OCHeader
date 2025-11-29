@class NSString, NSDictionary, SKProduct, IESLiveImage, NSNumber;

@interface IESLiveChargeModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iapId;
@property (retain, nonatomic) NSNumber *productId;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *exchangePrice;
@property (retain, nonatomic) NSNumber *diamondCount;
@property (retain, nonatomic) NSNumber *givingCount;
@property (retain, nonatomic) NSNumber *discountPrice;
@property (retain, nonatomic) SKProduct *product;
@property (retain, nonatomic) IESLiveImage *productImage;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *diamondForCreateOrder;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;

@end
