@class UBDictionarySignal, NSString, NSData, NSNumber, NSMutableArray;

@interface MJSpeechAsyncTask : NSObject

@property (nonatomic) double requestStartTimeInterval;
@property (nonatomic) double queryInterval;
@property (nonatomic) long long queryCount;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSNumber *taskID;
@property (retain, nonatomic) NSString *submitTaskID;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSData *contextBuff;
@property (readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal;

- (id)initWithStatusDidUpdateSignal:(id)a0;
- (void)dealloc;
- (BOOL)appendCompletionIfRunning:(id)a0;
- (void)markStatusPending;
- (void)startWithParams:(id)a0 completionHandler:(id)a1;
- (void)cancel;
- (void)_submitAsyncRequestWithParams:(id)a0;
- (void)_queryAsyncRequest;
- (void)_submitDidSuccessWithTaskID:(long long)a0 submitID:(id)a1 info:(id)a2;
- (void)_submitDidFailWithError:(id)a0;
- (void)_queryDidFailWithError:(id)a0;
- (void)_queryDidFinishWithResult:(id)a0;
- (void)_queryDidCompleteOnceWithInfo:(id)a0;
- (void)_handleTaskStartWithID:(long long)a0;
- (void)_handleTaskFailWithError:(id)a0;
- (void)_handleTaskSuccessWithResult:(id)a0;
- (long long)submitAsyncRequestImplWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (long long)queryAsyncRequestImplWithCompletionHandler:(id /* block */)a0;
- (long long)taskTimeoutMillis;
- (void)processWithResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleTaskFailImplWithError:(id)a0 completionHandlers:(id)a1;
- (void)handleTaskSuccessImplWithResult:(id)a0 completionHandlers:(id)a1;
- (id)statusDidUpdateParams;
- (id)description;
- (void).cxx_destruct;

@end
