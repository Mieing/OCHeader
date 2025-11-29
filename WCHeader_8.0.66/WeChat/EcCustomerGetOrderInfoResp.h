@class EcCustomerOrderInfo, BaseResponse;

@interface EcCustomerGetOrderInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EcCustomerOrderInfo *order;

+ (void)initialize;

@end
