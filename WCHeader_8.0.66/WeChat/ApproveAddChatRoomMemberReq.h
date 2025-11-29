@class NSString, NSMutableArray;

@interface ApproveAddChatRoomMemberReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomname;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *inviterusername;
@property (retain, nonatomic) NSMutableArray *username;
@property (nonatomic) unsigned long long approvenewmsgid;

+ (void)initialize;

@end
