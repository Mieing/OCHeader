@class NSString, JumpWxaInfo, JumpLiteApp, EcShopCard_ShopWindowProfileInfo_ReputationInfo, EcShopCard_ShopWindowProfileInfo_ShopIcon;

@interface EcShopCard_ShopWindowProfileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *shopWindowProfileName;
@property (retain, nonatomic) NSString *tailIconUrl;
@property (retain, nonatomic) NSString *saleWording;
@property (retain, nonatomic) NSString *saleWordingExt;
@property (retain, nonatomic) NSString *profileTypeWording;
@property (nonatomic) unsigned int profileJumpType;
@property (retain, nonatomic) JumpLiteApp *liteApp;
@property (retain, nonatomic) JumpWxaInfo *wxaInfo;
@property (nonatomic) BOOL isWxShop;
@property (retain, nonatomic) NSString *platformIconUrl;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *brandTailWording;
@property (retain, nonatomic) NSString *platformIconUrlDarkmode;
@property (retain, nonatomic) EcShopCard_ShopWindowProfileInfo_ReputationInfo *reputationInfo;
@property (retain, nonatomic) EcShopCard_ShopWindowProfileInfo_ShopIcon *shopIcon;

+ (void)initialize;

@end
