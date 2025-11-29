@class BaseRequest, NSString;

@interface ReceiveChatroomMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
