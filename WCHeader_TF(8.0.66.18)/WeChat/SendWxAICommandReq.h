@class BaseRequest, NSString, SendWxAICommandReq_LoginInfo, SendWxAICommandReq_PosInfo;

@interface SendWxAICommandReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int sendtime;
@property (retain, nonatomic) NSString *tousername;
@property (nonatomic) unsigned long long chatroomid;
@property (retain, nonatomic) SendWxAICommandReq_LoginInfo *loginInfo;
@property (retain, nonatomic) NSString *climsgid;
@property (retain, nonatomic) SendWxAICommandReq_PosInfo *posInfo;

+ (void)initialize;

@end
