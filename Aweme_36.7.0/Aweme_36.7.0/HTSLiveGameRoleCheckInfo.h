@class NSString;

@interface HTSLiveGameRoleCheckInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isBindRole;
@property (nonatomic) BOOL isMeetTeamRequirement;
@property (copy, nonatomic) NSString *reason;

+ (id)descriptor;

@end
