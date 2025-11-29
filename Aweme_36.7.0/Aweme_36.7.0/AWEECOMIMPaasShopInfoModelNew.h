@class NSString, NSDictionary, BDECPigeonShopInfoModelV2;

@interface AWEECOMIMPaasShopInfoModelNew : NSObject <AWEECOMIMPaasShopInfoModelProtocol>

@property (retain, nonatomic) BDECPigeonShopInfoModelV2 *shopInfoModel;
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

+ (id)PaasShopInfoModelWithPigeonShopInfoModel:(id)a0;
+ (id)convertToPigeonShopInfoModel:(id)a0;

- (void).cxx_destruct;

@end
