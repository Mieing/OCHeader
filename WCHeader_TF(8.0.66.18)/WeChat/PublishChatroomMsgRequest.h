@class BaseRequest, NSString;

@interface PublishChatroomMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
