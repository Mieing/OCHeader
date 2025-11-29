@class NSString, NSArray, EcTaskProgress;

@interface EcTaskStatus : NSObject

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long state;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSArray *failedList;
@property (copy, nonatomic) NSArray *completePaths;
@property (retain, nonatomic) EcTaskProgress *progress;

+ (long long)getTaskItemState:(int)a0 taskType:(long long)a1;

- (void)displayTaskInfo;
- (id)initWithTaskKey:(id)a0 type:(long long)a1 state:(long long)a2;
- (id)initWithTaskStatus:(id)a0;
- (void).cxx_destruct;

@end
