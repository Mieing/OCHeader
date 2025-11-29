@class BaseRequest, NSString;

@interface AppMsgOperateCommentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long clientId;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int personalCommentId;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subscene;
@property (nonatomic) unsigned int enterId;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long commentTopicId;
@property (nonatomic) unsigned int replyId;

+ (void)initialize;

@end
