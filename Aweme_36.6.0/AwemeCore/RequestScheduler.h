@class DownloadGlobalParameters, NSArray, NSString, AtomicCounter, LastRetryTask, UrlStatusManager, NSObject;
@protocol OS_dispatch_source;

@interface RequestScheduler : NSObject

@property (retain) NSArray *urlList;
@property (copy) NSString *key;
@property (retain) DownloadGlobalParameters *param;
@property (copy) id /* block */ progressCallback;
@property (copy) id /* block */ resultCallback;
@property (retain) UrlStatusManager *urlManager;
@property char concurrentCount;
@property (copy) NSString *dir;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property (retain) AtomicCounter *deltaLen;
@property BOOL isCancelled;
@property double startTime;
@property BOOL isCompleted;
@property (retain) LastRetryTask *lastRetryTask;

- (void)reportResult:(id)a0;
- (void)sendRequest:(BOOL)a0 isCompleted:(BOOL *)a1 progressCallback:(id /* block */)a2 resultCallback:(id /* block */)a3;
- (void)releaseReference;
- (id)initWithConfig:(id)a0 urlLists:(id)a1 fileNameDic:(id)a2 downloadDir:(id)a3 concurrentCount:(char)a4 progress:(id /* block */)a5 resultCallback:(id /* block */)a6 userParameters:(id)a7;
- (void)startAsync;
- (void)deleteAsync;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAsync;

@end
