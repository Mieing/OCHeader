@class WeChatWalletInfo, TablePageData, RouteInfo, BaseResponse;

@interface QueryWeChatWalletResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TablePageData *walletPage;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) WeChatWalletInfo *walletInfo;
@property (nonatomic) unsigned long long timeStamp;

+ (void)initialize;

@end
