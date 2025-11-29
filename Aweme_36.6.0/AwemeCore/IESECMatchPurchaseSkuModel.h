@class NSString, NSNumber;

@interface IESECMatchPurchaseSkuModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *specName;
@property (copy, nonatomic) NSString *skuID;
@property (nonatomic) long long num;
@property (copy, nonatomic) NSNumber *skuPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
