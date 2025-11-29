@class BaseRequest, NSString;

@interface MsgCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferId;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *msgCheckStr;

+ (void)initialize;

@end
