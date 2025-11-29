@class BaseRequest, NSString;

@interface CgiPayCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *f2FId;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *extendStr;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (nonatomic) unsigned int amount;

+ (void)initialize;

@end
