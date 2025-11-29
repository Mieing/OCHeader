@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface VerifyPurchaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *receipt;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int verifyType;
@property (nonatomic) unsigned int payType;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *currencyType;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned int payTime;
@property (retain, nonatomic) NSString *receiptSig;
@property (nonatomic) unsigned int quantity;

+ (void)initialize;

@end
