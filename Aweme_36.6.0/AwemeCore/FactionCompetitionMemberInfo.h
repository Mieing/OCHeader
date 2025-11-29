@class NSString, LiteUserInfo;

@interface FactionCompetitionMemberInfo : IESLivePBBaseMessage

@property (retain, nonatomic) LiteUserInfo *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *groupName;

+ (id)descriptor;

@end
