@class NSString, NSDictionary, NSArray, NSError;
@protocol EffectPlatformRequestDelegate;

@interface IESDelegateFileDownloadTaskV2 : NSOperation <IESFileDownloadOptimizeTaskProtocol> {
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) long long logIdentifier;
@property (nonatomic) double startDownloadTime;
@property (nonatomic) double waitDuration;
@property (weak, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) NSDictionary *downloadParameters;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *downloadKey;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) id /* block */ finishNotifyCompletion;
@property (nonatomic) BOOL externalPaused;
@property (nonatomic) double addWaitQueueTimeStamp;
@property (nonatomic) double createTime;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getLogIdentifier;
- (void)handleDownloadResultWithError:(id)a0 filePath:(id)a1 extraInfoDict:(id)a2;
- (void)printTaskFinishLog;
- (id)copyTask;
- (id)initWithURL:(id)a0 filePath:(id)a1;
- (void)updateExtraInfoDict:(id)a0;
- (id)makeTaskParam;
- (void).cxx_destruct;
- (void)pause;
- (BOOL)isReady;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isCancelled;
- (void)resume;
- (BOOL)isExecuting;
- (void)dealloc;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;
- (void)startDownload;
- (void)finishExecuting;

@end
