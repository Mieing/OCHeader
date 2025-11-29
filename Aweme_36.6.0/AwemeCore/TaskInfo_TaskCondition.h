@interface TaskInfo_TaskCondition : IESLivePBBaseMessage

@property (nonatomic) long long lowerLevel;
@property (nonatomic) long long upperLevel;
@property (nonatomic) long long needScore;

+ (id)descriptor;

@end
