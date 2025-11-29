@class NSString, NSMutableArray;

@interface QueryCoinTaskMissionResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *taskListArray;
@property (readonly, nonatomic) unsigned long long taskListArray_Count;

+ (id)descriptor;

@end
