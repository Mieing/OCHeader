@class NSObject, NSDateFormatter, NSString, NSMutableArray, MQPTrackModel;
@protocol OS_dispatch_queue;

@interface MQPTrackManager : NSObject

@property (retain, nonatomic) MQPTrackModel *currentLog;
@property (retain, nonatomic) NSMutableArray *uploadTasks;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly, nonatomic) NSString *aplinktoken;
@property (readonly, nonatomic) NSString *apiInvokeTs;
@property (readonly, nonatomic) NSString *callType;
@property (copy, nonatomic) id /* block */ apLogBlock;

+ (id)stringFromDate:(id)a0;
+ (void)log:(id)a0;
+ (id)shared;

- (void)transactionWillStart:(id)a0 andApi:(id)a1 withNewLog:(BOOL)a2;
- (void)transactionStoreToLocal;
- (void)onTrackAction:(id)a0 actionName:(id)a1;
- (void)onTrackBizError:(id)a0 error:(id)a1;
- (void)onTrackCraError:(id)a0 error:(id)a1;
- (void)onTrackNetError:(id)a0 error:(id)a1;
- (void)onTrackWarn:(id)a0 error:(id)a1;
- (void)onErrorTrack:(id)a0;
- (void)onNormalTrack:(id)a0;
- (void)uploadLogAll;
- (void)uploadLogFile:(id)a0;
- (BOOL)uploadTrack:(id)a0;
- (void)removeUploadedFiles:(id)a0 succ:(BOOL)a1;
- (id)storeToLocal;
- (void)removeLogFile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)transactionDidFinish;

@end
