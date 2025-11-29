@class HTSLiveGameRole, HTSLiveGameRoleCheckInfo, HTSLiveUser;

@interface HTSLiveTeamPlayMember : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) int status;
@property (retain, nonatomic) HTSLiveGameRole *bindingRole;
@property (nonatomic) BOOL hasBindingRole;
@property (retain, nonatomic) HTSLiveGameRoleCheckInfo *gameRoleCheckInfo;
@property (nonatomic) BOOL hasGameRoleCheckInfo;

+ (id)descriptor;

@end
