@class NSString, BattleUserInfo;

@interface FlexActivity_RegisteredUser : IESLivePBBaseMessage

@property (retain, nonatomic) BattleUserInfo *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *descText;

+ (id)descriptor;

@end
