@class NSString, NSMutableArray;
@protocol SAMIVoiceConversionFetcherDelegate;

@interface SAMIVoiceConversionFetcher : NSObject

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (copy, nonatomic) NSString *appKey;
@property (weak, nonatomic) id<SAMIVoiceConversionFetcherDelegate> delegate;

- (id)logChain;
- (void)postCompleteTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (void)cancelSubTask:(id)a0;
- (void)devideTasksAndRequest:(id)a0 taskID:(id)a1;
- (void)batchRequestVCTasks:(id)a0 taskID:(id)a1;
- (id)bodyParamsUseTasks:(id)a0;
- (id)headerFieldParams;
- (void)processResponse:(id)a0 tasks:(id)a1 taskID:(id)a2;
- (void)updateAppKey:(id)a0;
- (void)fetchTasks:(id)a0 taskID:(id)a1;
- (void)cancelTask:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)requestURL;
- (void)removeItem:(id)a0;
- (id)init;
- (void)cancelAllTasks;

@end
