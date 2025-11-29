@class LiteUserInfo;

@interface QueryIncomeGroupMemberInfosResp_GroupLiveMemberInfo : IESLivePBBaseMessage

@property (retain, nonatomic) LiteUserInfo *user;
@property (nonatomic) BOOL hasUser;

+ (id)descriptor;

@end
