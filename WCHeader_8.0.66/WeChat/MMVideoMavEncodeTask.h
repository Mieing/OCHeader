@class VideoCompositionOutputConfig, MAVVideoComposition;

@interface MMVideoMavEncodeTask : VideoEncodeTask

@property (retain, nonatomic) MAVVideoComposition *originalVideoComposition;
@property (retain, nonatomic) MAVVideoComposition *currentVideoComposition;
@property (retain, nonatomic) VideoCompositionOutputConfig *config;
@property (copy, nonatomic) id /* block */ videoExportCompletion;
@property (nonatomic) unsigned long long currentAutoRetryTimes;
@property (nonatomic) BOOL hasCanceledInCurrentExportSessionForApplicationSuspend;
@property (nonatomic) BOOL keepsProcessInBackgroundEnabled;
@property (nonatomic) BOOL isAutoRetryEnabled;

+ (id)taskWithComposition:(id)a0 config:(id)a1;

- (id)initWithComposition:(id)a0 config:(id)a1;
- (void)_exportAsynchronously;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)cleanExportSession;
- (void)stopExport;
- (void)pauseExport;
- (void)continueExport;
- (void)retryExport;
- (BOOL)shouldRetryExport;
- (BOOL)shouldCallbackForCancel;
- (BOOL)canCancelExport;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillSuspend;
- (void).cxx_destruct;

@end
