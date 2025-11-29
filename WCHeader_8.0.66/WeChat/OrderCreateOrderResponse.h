@class NSString, RoundPolicy, BaseResponse;

@interface OrderCreateOrderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSString *prepayId;
@property (nonatomic) long long orderExpireTime;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *subAppid;
@property (retain, nonatomic) RoundPolicy *roundPolicy;

+ (void)initialize;

@end
