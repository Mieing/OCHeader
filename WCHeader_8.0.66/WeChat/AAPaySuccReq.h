@class BaseRequest, NSString;

@interface AAPaySuccReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned long long payAmount;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSString *transactionId;

+ (void)initialize;

@end
