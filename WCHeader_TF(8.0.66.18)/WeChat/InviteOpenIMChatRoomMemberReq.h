@class NSString, NSMutableArray;

@interface InviteOpenIMChatRoomMemberReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (void)initialize;

@end
