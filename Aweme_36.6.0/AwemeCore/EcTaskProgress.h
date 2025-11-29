@class NSString, NSArray;

@interface EcTaskProgress : NSObject

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSArray *processList;
@property (nonatomic) int itemFailed;
@property (nonatomic) unsigned int itemDone;
@property (nonatomic) unsigned int itemTotal;
@property (nonatomic) long long bytesDone;
@property (nonatomic) long long bytesTotal;

- (void)displayTaskInfo;
- (void)addTaskToProcessList:(id)a0;
- (void)removeTaskFromProcessList:(id)a0;
- (void).cxx_destruct;

@end
