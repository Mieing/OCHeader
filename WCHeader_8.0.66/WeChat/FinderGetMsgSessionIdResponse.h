@class NSString, FinderMsgSessionInfo, BaseResponse;

@interface FinderGetMsgSessionIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int enableAction;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) FinderMsgSessionInfo *sessionInfo;

+ (void)initialize;

@end
