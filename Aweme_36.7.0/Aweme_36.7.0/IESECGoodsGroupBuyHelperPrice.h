@class NSString, NSNumber;

@interface IESECGoodsGroupBuyHelperPrice : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *header;
@property (retain, nonatomic) NSNumber *originMinPrice;
@property (retain, nonatomic) NSNumber *originMaxPrice;
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
