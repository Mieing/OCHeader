@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface PreparePurchaseResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *tradeToken4TenPay;
@property (retain, nonatomic) NSString *partner4TenPay;
@property (retain, nonatomic) NSString *sign4TenPay;
@property (retain, nonatomic) SKBuiltinBuffer_t *wecoinBuff;

+ (void)initialize;

@end
