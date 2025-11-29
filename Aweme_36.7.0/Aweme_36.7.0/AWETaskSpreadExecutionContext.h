@class AWETaskSpreadMetaTask;

@interface AWETaskSpreadExecutionContext : NSObject

@property (retain, nonatomic) AWETaskSpreadMetaTask *executingTask;
@property (retain, nonatomic) id taskInfo;
@property (nonatomic) BOOL endExecution;
@property (nonatomic) BOOL skipMetaTaskOnce;
@property (nonatomic) BOOL skipTaskOnce;

- (void)stopExecution;
- (void)skipTask;
- (void).cxx_destruct;
- (void)skip;

@end
