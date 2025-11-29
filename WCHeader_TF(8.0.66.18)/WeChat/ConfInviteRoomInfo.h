@class NSString, NSMutableArray;

@interface ConfInviteRoomInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *groupid;
@property (nonatomic) unsigned int selfMemberid;
@property (retain, nonatomic) NSMutableArray *inviteItems;
@property (nonatomic) BOOL enableAddBeforeAccept;

+ (void)initialize;

@end
