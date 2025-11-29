@class NSString, OpenIMChatRoomMemberData, OpenIMChatRoomData;

@interface OpenIMChatRoomContact : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) unsigned int svrChatroomVersion;
@property (retain, nonatomic) OpenIMChatRoomData *chatRoom;
@property (nonatomic) unsigned int svrMemberVersion;
@property (retain, nonatomic) OpenIMChatRoomMemberData *memberData;
@property (nonatomic) unsigned int chatRoomNotify;
@property (nonatomic) unsigned int bitVal;
@property (nonatomic) unsigned int bitMask;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int contactType;

+ (void)initialize;

@end
