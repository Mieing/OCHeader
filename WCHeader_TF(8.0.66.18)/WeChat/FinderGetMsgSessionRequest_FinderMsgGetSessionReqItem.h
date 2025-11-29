@class NSString;

@interface FinderGetMsgSessionRequest_FinderMsgGetSessionReqItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int myAccountType;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int sourceType;
@property (nonatomic) unsigned int userpageEnterType;
@property (nonatomic) unsigned int userpageLastCommentScene;
@property (nonatomic) unsigned long long userpageFromObjectId;

+ (void)initialize;

@end
