@class NSString, JumpRemind, BaseResponse;

@interface WABizF2FPlaceOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) JumpRemind *jumpRemind;
@property (retain, nonatomic) NSString *personalpayOrderId;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *showPayingWording;
@property (retain, nonatomic) NSString *placeorderExt;

+ (void)initialize;

@end
