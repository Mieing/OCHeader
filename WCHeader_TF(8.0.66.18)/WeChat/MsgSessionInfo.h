@class NSString;

@interface MsgSessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *msgSessionId;
@property (nonatomic) unsigned int sessionStatus;
@property (nonatomic) BOOL canChangeMsgIdentity;
@property (nonatomic) BOOL canRecvMsg;

+ (void)initialize;

@end
