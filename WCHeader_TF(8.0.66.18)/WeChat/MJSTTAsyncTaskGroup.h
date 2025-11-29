@class NSData, NSString, MJSpeechAudioData, MJSpeechCgiHelper, NSMutableArray, UBDictionarySignal, MJSTTReportInfo, NSNumber;

@interface MJSTTAsyncTaskGroup : NSObject

@property (retain, nonatomic) MJSpeechAudioData *audioData;
@property (retain, nonatomic) NSMutableArray *submitTasks;
@property (retain, nonatomic) NSNumber *queryTask;
@property (nonatomic) long long runningTaskCount;
@property (nonatomic) long long submitSucceedCount;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSData *contextBuff;
@property (retain, nonatomic) NSString *submitTaskID;
@property (nonatomic) double requestStartTimeInterval;
@property (nonatomic) double queryInterval;
@property (nonatomic) long long queryCount;
@property (readonly, nonatomic) BOOL isRequestCgi;
@property (retain, nonatomic) MJSpeechCgiHelper *cgiHelper;
@property (retain, nonatomic) MJSTTReportInfo *reportInfo;
@property (readonly, nonatomic) NSString *audioID;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal;

- (id)initWithAudioID:(id)a0 statusDidUpdateSignal:(id)a1;
- (void)dealloc;
- (void)startWithAudioData:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancel;
- (BOOL)appendCompletionIfRunning:(id)a0;
- (void)markStatusPending;
- (void)handleTaskStart;
- (void)handleTaskSuccessWithResult:(id)a0;
- (void)handleTaskFailWithError:(id)a0;
- (void)handleOneOfSubmitsDidSuccessWithTaskID:(long long)a0 submitID:(id)a1 info:(id)a2;
- (void)handleAllSubmitsDidSuccess;
- (void)queryAsyncRequest;
- (void)queryDidFailWithError:(id)a0;
- (void)queryDidFinishWithResult:(id)a0;
- (void)queryDidCompleteOnceWithInfo:(id)a0;
- (id)statusDidUpdateParams;
- (BOOL)containsInvalidTaskID;
- (long long)taskTimeoutMillis;
- (void)cacheResult:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
