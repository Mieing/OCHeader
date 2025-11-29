@class NSString, NSArray, NSDictionary, AWEECOMShopExtraConfigModel;

@interface AWEECOMShopDetailModel : NSObject <NSCoding, AWEECOMIMPaasShopInfoModelProtocol>

@property (copy, nonatomic) NSString *companyName;
@property (nonatomic) BOOL isOnService;
@property (copy, nonatomic) NSString *bindSecUid;
@property (nonatomic) BOOL isPlatform;
@property (nonatomic) long long vType;
@property (copy, nonatomic) NSArray *iconModelArr;
@property (copy, nonatomic) NSArray *shopTag;
@property (nonatomic) long long promotionType;
@property (copy, nonatomic) NSString *promotionDes;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWEECOMShopExtraConfigModel *extraConfigModel;
@property (nonatomic) BOOL isEnterStoreMasked;
@property (nonatomic) BOOL instantRetailShop;
@property (copy, nonatomic) NSString *encodedMainShopId;
@property (copy, nonatomic) NSString *subNoticeText;
@property (nonatomic) BOOL shouldExpandTopBanner;
@property (nonatomic) long long expandStatus;
@property (nonatomic) BOOL isInputStatusActive;
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

@end
