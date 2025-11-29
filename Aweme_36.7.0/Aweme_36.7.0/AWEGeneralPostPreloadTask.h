@class NSString, NSTimer, AWEGeneralPostPreloadTemplateTask, NSDictionary, NSMutableArray, NSError;

@interface AWEGeneralPostPreloadTask : NSObject <AWEGeneralPostPreloadTaskProtocol>

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *resourceTaskId;
@property (nonatomic) BOOL taskHaveWrong;
@property (retain, nonatomic) AWEGeneralPostPreloadTemplateTask *preloadTemplateTask;
@property (nonatomic) long long state;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *progressExtra;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)downloadedSize;
- (BOOL)doubleCheckTaskStateSuccess;
- (void)addSubTask:(id)a0;
- (void)updateTaskState;
- (BOOL)isEmptyPreloadTask;
- (void)addPreloadTemplateTask:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)updateProgress;
- (void)start;
- (void)cancel;
- (long long)totalDownloadSize;

@end
