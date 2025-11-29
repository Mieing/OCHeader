@class NSString, NSMutableArray, OpenIMChatRoomMemberInReq;

@interface ApproveAddOpenIMChatRoomMemberReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) OpenIMChatRoomMemberInReq *inviter;
@property (retain, nonatomic) NSMutableArray *invitedMember;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
