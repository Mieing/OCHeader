@class FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowScoreInfo, NSString, FinderWxAppInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopIconInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_LiteAppJumpInfo, NSMutableArray, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowSalesInfo;

@interface FinderLiveGetShopShelfResponse_ShopWindowProfileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shopWindowProfileName;
@property (nonatomic) unsigned int profileJumpType;
@property (retain, nonatomic) FinderWxAppInfo *jumpWxaInfo;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_LiteAppJumpInfo *jumpLiteappInfo;
@property (retain, nonatomic) NSMutableArray *profilePropertyImgs;
@property (retain, nonatomic) NSString *shopWindowProfileHeadimgUrl;
@property (retain, nonatomic) NSString *profileJumpDescriptionWording;
@property (nonatomic) unsigned int shopWindowStyleType;
@property (retain, nonatomic) NSString *shopWindowJumpTargetNickname;
@property (nonatomic) unsigned int shopWindowType;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowSalesInfo *salesInfo;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowScoreInfo *scoreInfo;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopIconInfo *shopIconInfo;

+ (void)initialize;

@end
