@class NSString, HTSLiveUser;

@interface QuerySelfGroupMemberInfosResp_GroupLiveMemberInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long score;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long giftIncome;

+ (id)descriptor;

@end
