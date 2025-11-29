@class NSString, NSMutableArray;

@interface TaskInfo_TaskPhase : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) int status;
@property (nonatomic) long long currentProgress;
@property (nonatomic) long long totalProgress;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long rewardStarCount;
@property (retain, nonatomic) NSMutableArray *challengeUsersArray;
@property (readonly, nonatomic) unsigned long long challengeUsersArray_Count;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSMutableArray *simpleChallengeUsersArray;
@property (readonly, nonatomic) unsigned long long simpleChallengeUsersArray_Count;

+ (id)descriptor;

@end
