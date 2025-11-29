@class BaseRequest, NSString, NSData;

@interface BusiF2FActQryReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *f2FId;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (nonatomic) unsigned int totalAmount;
@property (retain, nonatomic) NSData *actInfo;
@property (retain, nonatomic) NSString *payokChecksign;

+ (void)initialize;

@end
