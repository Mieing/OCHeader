@class HTSLiveUser;

@interface HTSLiveCloudCollaborateMember : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long roomId;
@property (nonatomic) long long status;
@property (nonatomic) long long role;
@property (nonatomic) long long minRejoinTime;
@property (nonatomic) long long maxRejoinTime;

+ (id)descriptor;

@end
