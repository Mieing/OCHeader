@class TaskInfo_TaskCondition, NSMutableArray, HTSLiveImage;

@interface TaskInfo : IESLivePBBaseMessage

@property (retain, nonatomic) TaskInfo_TaskCondition *taskCondition;
@property (nonatomic) BOOL hasTaskCondition;
@property (retain, nonatomic) NSMutableArray *taskPhasesArray;
@property (readonly, nonatomic) unsigned long long taskPhasesArray_Count;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long taskCurrentProgress;

+ (id)descriptor;

@end
