@class NSData, RetryExtraParam, RouteInfo, PaymentSelectPageData;

@interface CmdInfo : WXPBGeneratedMessage

@property (nonatomic) int cmdId;
@property (retain, nonatomic) NSData *cmdData;
@property (retain, nonatomic) PaymentSelectPageData *paymentPage;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) RetryExtraParam *retryExtraParam;
@property (nonatomic) unsigned int customCmdId;

+ (void)initialize;

@end
