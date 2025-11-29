@class NSMutableArray, HTSLiveUser;

@interface HTSLiveSprintChallengeUserInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long score;
@property (retain, nonatomic) NSMutableArray *contributorInfoArray;
@property (readonly, nonatomic) unsigned long long contributorInfoArray_Count;

+ (id)descriptor;

@end
