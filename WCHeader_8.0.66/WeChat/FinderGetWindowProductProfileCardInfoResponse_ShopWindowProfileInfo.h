@class FinderJumpInfo_LiteApp, NSString, FinderWxAppInfo, FinderGetWindowProductProfileCardInfoResponse_ShopIcon, FinderGetWindowProductProfileCardInfoResponse_ReputationInfo;

@interface FinderGetWindowProductProfileCardInfoResponse_ShopWindowProfileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shopWindowProfileName;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *jumpLiteappInfo;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ReputationInfo *reputationInfo;
@property (retain, nonatomic) NSString *finderSaleWording;
@property (nonatomic) unsigned int profileJumpType;
@property (retain, nonatomic) FinderWxAppInfo *jumpWxaInfo;
@property (retain, nonatomic) NSString *profileTypeWording;
@property (retain, nonatomic) NSString *finderSaleWordingExt;
@property (nonatomic) BOOL isWxShop;
@property (retain, nonatomic) NSString *platformIconUrl;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *platformIconUrlDarkmode;
@property (retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ShopIcon *shopIcon;

+ (void)initialize;

@end
