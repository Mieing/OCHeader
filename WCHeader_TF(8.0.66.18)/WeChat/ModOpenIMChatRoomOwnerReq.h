@class NSString, OpenIMChatRoomMemberInReq;

@interface ModOpenIMChatRoomOwnerReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) OpenIMChatRoomMemberInReq *newOwner;

+ (void)initialize;

@end
