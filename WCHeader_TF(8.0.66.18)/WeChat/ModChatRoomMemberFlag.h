@class NSString;

@interface ModChatRoomMemberFlag : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int flagSwitch;
@property (nonatomic) unsigned int value;

+ (void)initialize;

@end
