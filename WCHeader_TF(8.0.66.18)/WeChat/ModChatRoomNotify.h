@class SKBuiltinString_t;

@interface ModChatRoomNotify : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *chatRoomName;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int needPushFlag;

+ (void)initialize;

@end
