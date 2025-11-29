@class UserRole, NSString, AccountIdentityInfo, TagInfo, LbsInfo, JumpInfo;

@interface ChatroomUserData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatar;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) BOOL isAuthorized;
@property (retain, nonatomic) TagInfo *tagInfo;
@property (retain, nonatomic) LbsInfo *lbsInfo;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned int role;
@property (nonatomic) BOOL canBeAt;
@property (nonatomic) BOOL isRobot;
@property (nonatomic) BOOL canKickMember;
@property (retain, nonatomic) UserRole *userRole;
@property (nonatomic) BOOL canBeKicked;
@property (nonatomic) BOOL canAtAll;
@property (retain, nonatomic) JumpInfo *h5ProfileJumpInfo;
@property (retain, nonatomic) JumpInfo *createAccountJumpInfo;
@property (retain, nonatomic) AccountIdentityInfo *indentity;
@property (retain, nonatomic) NSString *externInfo;
@property (nonatomic) BOOL isSelf;

+ (void)initialize;

@end
