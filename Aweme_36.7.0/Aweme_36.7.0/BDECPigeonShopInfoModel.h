@class NSString, NSDictionary;

@interface BDECPigeonShopInfoModel : NSObject <NSCoding>

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

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
