@class BaseRequest, NSString;

@interface AppMsgLikeCommentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int personalCommentId;
@property (retain, nonatomic) NSString *openid;
@property (nonatomic) int like;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int replyId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subscene;
@property (nonatomic) unsigned int enterId;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
