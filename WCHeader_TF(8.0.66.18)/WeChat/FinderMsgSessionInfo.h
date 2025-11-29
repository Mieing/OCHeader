@class NSString, NSData;

@interface FinderMsgSessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int rejectMsg;
@property (nonatomic) unsigned int enableAction;
@property (retain, nonatomic) NSData *msgExtInfo;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) BOOL disableSendmsgNeedFollow;

+ (void)initialize;

@end
