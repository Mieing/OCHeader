@class NSString, NSMutableString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEAspectServiceLogStorage : NSObject

@property (retain, nonatomic) NSString *logDirectory;
@property (retain, nonatomic) NSString *logFilePath;
@property (retain, nonatomic) NSMutableString *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) BOOL isFeedReadyFileWritten;
@property (nonatomic) BOOL hasDelayFileWriteTask;

+ (id)sharedLogStorage;
+ (BOOL)logEnabled;

- (void)putLog:(long long)a0 withContent:(id)a1;
- (void)processing:(id)a0;
- (void)appendCacheToLogFile;
- (BOOL)setupLogFile;
- (void)sortOutLogFiles:(id *)a0;
- (BOOL)isThreeDaysAgo:(long long)a0 withTimeStamp:(id)a1;
- (void)triggerFileWriteWhenFeedReady;
- (void).cxx_destruct;
- (id)init;
- (BOOL)createDirectoryIfNeeded:(id)a0;

@end
