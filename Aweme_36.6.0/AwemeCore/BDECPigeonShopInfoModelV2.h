@class NSString, NSDictionary;

@interface BDECPigeonShopInfoModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shopLogo;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *encodedShopId;
@property (copy, nonatomic) NSDictionary *extension;
@property (copy, nonatomic) NSString *promotionTypeStr;
@property (copy, nonatomic) NSString *promotionDesc;
@property (copy, nonatomic) NSString *bizServiceEntityID;
@property (copy, nonatomic) NSString *pigeonServiceEntityID;
@property (copy, nonatomic) NSString *aggregatesType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
