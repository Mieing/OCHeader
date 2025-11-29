@class NSString, SessionData, BlackListInfo, GameLifeMsgExtInfo;

@interface SessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) SessionData *sessionData;
@property (retain, nonatomic) NSString *myUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) BlackListInfo *blackListInfo;
@property (retain, nonatomic) GameLifeMsgExtInfo *msgExtInfo;
@property (nonatomic) unsigned int sessionType;

+ (void)initialize;

@end
