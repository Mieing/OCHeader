@class NSString, NSMutableArray;

@interface QueryCoinTaskMissionResponse_TaskData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *taskIcon;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *completedTimes;
@property (copy, nonatomic) NSString *totalTimes;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSMutableArray *awardNodeArray;
@property (readonly, nonatomic) unsigned long long awardNodeArray_Count;

+ (id)descriptor;

@end
