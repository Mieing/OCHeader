@class BaseRequest, NSString, BizChat;

@interface UpdateBizChatReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) BizChat *chat;

+ (void)initialize;

@end
