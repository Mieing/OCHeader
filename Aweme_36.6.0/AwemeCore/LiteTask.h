@class DownloadGlobalParameters, NSString, NSArray, NSURL, TTDownloadTrackModel, NSMutableArray;
@protocol TTDownloadTaskProtocol;

@interface LiteTask : NSObject

@property (copy) NSString *key;
@property (retain) DownloadGlobalParameters *param;
@property (copy) NSString *fileName;
@property (retain) NSArray *urlsList;
@property (copy) id /* block */ progressCallback;
@property (copy) id /* block */ resultCallback;
@property (copy) NSString *fileDir;
@property (copy) NSString *fileFullPath;
@property (copy) NSString *tempFileFullPath;
@property (retain) id<TTDownloadTaskProtocol> requestTask;
@property BOOL isCancel;
@property BOOL isDelete;
@property long long remainRetryTimes;
@property long long urlIndex;
@property long long initDownloadedLen;
@property long long totalLen;
@property (retain) NSURL *nsurl;
@property BOOL isResumeEnable;
@property BOOL isIgnoreCallback;
@property (retain) NSMutableArray *responseArray;
@property (retain, nonatomic) TTDownloadTrackModel *tracker;
@property (nonatomic) BOOL isFirst;
@property double lastUpdateProgressTime;
@property long long currNetType;
@property BOOL isRetryImmediately;
@property double startDownloadTime;
@property long long originOffset;
@property long long currDownloadedLen;
@property int realRetryCount;
@property BOOL isUpdateUrl;
@property (copy) NSString *userNewestUrl;
@property BOOL isCleanLastCache;
@property (retain) NSMutableArray *sameTaskConfigArray;
@property long long totalExcessBytes;

+ (BOOL)getIsResumeEnable:(id)a0 url:(id)a1;
+ (id)getFileDir:(BOOL)a0 key:(id)a1;
+ (id)getTempFileName:(id)a0;

- (void)applicationEnterBackground;
- (void)appReachabilityChanged:(id)a0;
- (void)cancelInternal;
- (void)startImpl;
- (void)invokeMergedTaskCallback:(id)a0;
- (void)asynReportResult:(long long)a0 httpCode:(long long)a1 param:(id)a2 realUrl:(id)a3 filePath:(id)a4 log:(id)a5 error:(id)a6;
- (id)progressInfo:(long long)a0 total:(long long)a1 speed:(long long)a2;
- (void)updateRange:(id)a0 param:(id)a1 tempFullPath:(id)a2;
- (long long)getLiteTaskThrottleSpeed;
- (void)replaceFilePath:(id)a0 mergedConfig:(id)a1;
- (void)createTracker:(id)a0;
- (void)mergeSameTask:(id)a0;
- (id)initWhithParam:(id)a0 urlsList:(id)a1 fileName:(id)a2 param:(id)a3 progressCallback:(id /* block */)a4 resultCallback:(id /* block */)a5;
- (id)getUrl;
- (BOOL)initTask;
- (void)addExcessBytes:(long long)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)sendRequest;
- (void)start;
- (void)addResponse:(id)a0;
- (void)deleteCache;
- (void)dealloc;
- (void)cancel;

@end
