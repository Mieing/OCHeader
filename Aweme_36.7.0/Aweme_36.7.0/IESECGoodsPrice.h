@class NSString, NSNumber, IESECDiscountPrice;

@interface IESECGoodsPrice : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECDiscountPrice *discount;
@property (retain, nonatomic) IESECDiscountPrice *groupbuyDiscount;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *priceSuffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)minPrice;
- (id)maxPrice;
- (BOOL)hasGapPrice;
- (id)price;
- (void).cxx_destruct;

@end
