@class NSString;

@interface IESECSKUProductInfoParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (nonatomic) BOOL isMulti;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *combinationId;
@property (nonatomic) long long promotionSource;
@property (copy, nonatomic) NSString *hotSaleSkuId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
