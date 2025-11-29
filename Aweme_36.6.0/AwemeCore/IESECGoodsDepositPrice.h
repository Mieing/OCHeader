@class NSNumber, NSString;

@interface IESECGoodsDepositPrice : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *depositPrice;
@property (retain, nonatomic) NSNumber *discountMinPrice;
@property (retain, nonatomic) NSNumber *discountMaxPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
