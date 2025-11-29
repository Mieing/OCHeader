@class NSString, BattleUserInfo;

@interface UserListArea_UserInfo : IESLivePBBaseMessage

@property (retain, nonatomic) BattleUserInfo *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *descText;

+ (id)descriptor;

@end
