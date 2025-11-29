@class BaseRequest, ForwardMsgViewInfo;

@interface OpenForwardMsgViewSpamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) ForwardMsgViewInfo *msgInfo;

+ (void)initialize;

@end
