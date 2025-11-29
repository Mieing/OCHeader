@class BaseRequest, NSString, FullBizChat;

@interface CreateBizChatInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) FullBizChat *fullChat;

+ (void)initialize;

@end
