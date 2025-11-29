@class GPBInt64Array;

@interface WeeklyGoal : IESLivePBBaseMessage

@property (nonatomic) long long currentFinishedDays;
@property (retain, nonatomic) GPBInt64Array *rewardStagesArray;
@property (readonly, nonatomic) unsigned long long rewardStagesArray_Count;

+ (id)descriptor;

@end
