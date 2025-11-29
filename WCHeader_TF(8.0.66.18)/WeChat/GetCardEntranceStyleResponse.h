@class NSString, CardMiniAppInfo, BaseResponse;

@interface GetCardEntranceStyleResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) BOOL cardHomePageIsNewVersion;
@property (nonatomic) unsigned int newVersionStyle;
@property (nonatomic) unsigned int isTradeAreaVersion;
@property (retain, nonatomic) CardMiniAppInfo *tradeAreaVersionMiniAppInfo;
@property (nonatomic) BOOL isCardHomePageV2;

+ (void)initialize;

@end
