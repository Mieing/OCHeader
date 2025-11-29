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

- (void)setQrcodeUrl:(id)a0;
- (id)qrcodeUrl;
- (void)setMiniappAppUsername:(id)a0;
- (id)miniappAppUsername;
- (void)setMainShopBizuin:(unsigned long long)a0;
- (unsigned long long)mainShopBizuin;
- (void)setShopType:(unsigned int)a0;
- (unsigned int)shopType;
- (void)setFrontIcon:(id)a0;
- (id)frontIcon;
- (void)setMiniappInfo:(id)a0;
- (id)miniappInfo;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;
- (void)setIsOwnShop:(unsigned int)a0;
- (unsigned int)isOwnShop;
- (void)setIsShopTag:(unsigned int)a0;
- (unsigned int)isShopTag;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setTailIcon:(id)a0;
- (id)tailIcon;
- (void)setIsShow:(unsigned int)a0;
- (unsigned int)isShow;

@end
