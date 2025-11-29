@class BaseRequest, NSString;

@interface AppMsgCommentListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subscene;
@property (nonatomic) unsigned int enterId;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long commentTopicId;

+ (void)initialize;

@end
