@class NSString, InterceptWin, BaseResponse;

@interface MerchantPayPlaceOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) InterceptWin *alert;

+ (void)initialize;

@end
