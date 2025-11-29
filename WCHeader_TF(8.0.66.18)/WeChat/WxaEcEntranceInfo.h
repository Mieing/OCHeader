@class NSString, WxaEcEntranceInfo_IconUrl, WxaEcEntranceInfo_MiniAppConfig, WxaEcEntranceInfo_WxaEcLiteAppJumpInfo;

@interface WxaEcEntranceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int isShow;
@property (retain, nonatomic) NSString *tailIcon;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) WxaEcEntranceInfo_WxaEcLiteAppJumpInfo *jumpInfo;
@property (nonatomic) unsigned int isShopTag;
@property (nonatomic) unsigned int isOwnShop;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) WxaEcEntranceInfo_MiniAppConfig *miniappInfo;
@property (retain, nonatomic) WxaEcEntranceInfo_IconUrl *frontIcon;
@property (nonatomic) unsigned int shopType;
@property (nonatomic) unsigned long long mainShopBizuin;
@property (retain, nonatomic) NSString *miniappAppUsername;
@property (retain, nonatomic) NSString *qrcodeUrl;

+ (void)initialize;

@end
