@class NSString, NSDictionary;

@interface IESECPDPPreloadProductModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSDictionary *promotionV3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
