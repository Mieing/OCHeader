@class BaseRequest, NSString;

@interface QryPurchaseResultReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *tradeNo;
@property (retain, nonatomic) NSString *transactionId;
@property (nonatomic) unsigned int purchaseFee;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *operateId;
@property (nonatomic) unsigned int entranceType;
@property (nonatomic) unsigned int payChannel;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
