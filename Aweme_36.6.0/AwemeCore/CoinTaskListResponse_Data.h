@class NSString, NSMutableArray, TaskCenterExtraInfo;

@interface CoinTaskListResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *taskPanelTitle;
@property (retain, nonatomic) NSMutableArray *coinTaskItemsArray;
@property (readonly, nonatomic) unsigned long long coinTaskItemsArray_Count;
@property (retain, nonatomic) TaskCenterExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;

+ (id)descriptor;

@end
