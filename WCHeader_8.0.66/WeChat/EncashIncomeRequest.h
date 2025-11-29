@class BaseRequest, NSData, NSString;

@interface EncashIncomeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *ctxBuff;
@property (retain, nonatomic) NSData *sign;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *agentId;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
