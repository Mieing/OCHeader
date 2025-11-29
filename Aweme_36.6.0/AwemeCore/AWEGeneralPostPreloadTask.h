@class NSString, NSTimer, AWEGeneralPostPreloadTemplateTask, NSDictionary, NSMutableArray, NSError;

@interface AWEGeneralPostPreloadTask : NSObject <AWEGeneralPostPreloadTaskProtocol>

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEGeneralPostPreloadTemplateTask *preloadTemplateTask;
@property (nonatomic) long long state;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *progressExtra;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)downloadedSize;
- (void)addSubTask:(id)a0;
- (void)updateTaskState;
- (void)addPreloadTemplateTask:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)updateProgress;
- (void)start;
- (void)cancel;
- (long long)totalDownloadSize;

@end
