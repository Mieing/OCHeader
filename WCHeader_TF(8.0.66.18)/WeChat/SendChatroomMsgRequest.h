@class BaseRequest, NSString, ChatroomMsgPack;

@interface SendChatroomMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) ChatroomMsgPack *msgPack;
@property (retain, nonatomic) NSString *chatroomName;

+ (void)initialize;

@end
