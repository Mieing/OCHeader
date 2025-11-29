@class NSString, FinderWxAppInfo, FinderJumpInfo;

@interface FinderLiveGetShopShelfResponse_ShopVipInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *headWording;
@property (retain, nonatomic) NSString *descWording;
@property (retain, nonatomic) FinderWxAppInfo *jumpWxaInfo;
@property (nonatomic) unsigned int alreadyVipFlag;
@property (retain, nonatomic) FinderJumpInfo *clickVipOpenPage;
@property (retain, nonatomic) NSString *tailWording;
@property (retain, nonatomic) NSString *tailButtonWording;

+ (void)initialize;

@end
