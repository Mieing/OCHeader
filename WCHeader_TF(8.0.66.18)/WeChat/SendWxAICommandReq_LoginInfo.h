@class NSString;

@interface SendWxAICommandReq_LoginInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isNewAuth;

+ (void)initialize;

@end
