@class NSString, InterceptWin, BaseResponse;

@interface MerchantPayGetQRCodeInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *shopHeadimgUrl;
@property (retain, nonatomic) NSString *scanId;
@property (retain, nonatomic) NSString *shopAdname;
@property (retain, nonatomic) NSString *shopAddress;
@property (retain, nonatomic) InterceptWin *alert;
@property (nonatomic) unsigned int amountRemindBit;
@property (nonatomic) unsigned long long fixedAmount;
@property (retain, nonatomic) NSString *fixedDesc;
@property (nonatomic) BOOL jumpRouteInfo;
@property (retain, nonatomic) NSString *routeInfo;

+ (void)initialize;

@end
