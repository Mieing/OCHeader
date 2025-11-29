@class ChatroomUserData, NSString, ChatroomMsgPack;

@interface ChatroomMsgPackExtend : WXPBGeneratedMessage

@property (retain, nonatomic) ChatroomMsgPack *msgPack;
@property (retain, nonatomic) ChatroomUserData *userData;
@property (retain, nonatomic) NSString *briefContent;

+ (void)initialize;

@end
