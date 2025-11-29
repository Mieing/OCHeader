@class BaseRequest, NSString;

@interface BlockChatroomMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
