@class BaseRequest, NSString;

@interface CancelPurchaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int verifyType;
@property (nonatomic) unsigned int payType;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *currencyType;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned int payTime;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorDescription;

+ (void)initialize;

@end
