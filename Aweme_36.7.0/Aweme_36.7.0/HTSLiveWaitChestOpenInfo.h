@class NSString, NSMutableArray, HTSLiveChestTask;

@interface HTSLiveWaitChestOpenInfo : IESLivePBBaseMessage

@property (nonatomic) long long chestId;
@property (nonatomic) long long openTime;
@property (retain, nonatomic) HTSLiveChestTask *task;
@property (nonatomic) BOOL hasTask;
@property (retain, nonatomic) NSMutableArray *descListArray;
@property (readonly, nonatomic) unsigned long long descListArray_Count;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSMutableArray *achieveTaskUsersArray;
@property (readonly, nonatomic) unsigned long long achieveTaskUsersArray_Count;

+ (id)descriptor;

@end
