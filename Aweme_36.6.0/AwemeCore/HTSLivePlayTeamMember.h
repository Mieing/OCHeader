@class HTSLiveUser;

@interface HTSLivePlayTeamMember : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) int status;

+ (id)descriptor;

@end
