@class NSObject, AMapCacheFileManager, NSMutableArray, AMapNetworkManager;
@protocol OS_dispatch_queue;

@interface MAAnnotationInfoUploadManager : NSObject {
    long long _fileCount;
    long long _infoPerFile;
    long long _uploadTimespan;
    long long _uploadMinFileCountLimit;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AMapNetworkManager *_networkManager;
    NSMutableArray *_tempAnnotationInfoArray;
    AMapCacheFileManager *_fileManager;
}

@property BOOL isUploading;
@property double lastUploadTimestamp;

+ (id)sharedInstance;

- (BOOL)isUploadSucceededWithResponseData:(id)a0;
- (void)deallocOperation;
- (void)setDefaultConfig;
- (void)registerNotificationObservers;
- (void)reloadLastUploadTimestamp;
- (void)appDidEnterBackgroundAction;
- (void)deleteOldestFile;
- (void)writeAnnotationInfoArray;
- (void)uploadCacheFileIfNeeded;
- (BOOL)shouldUploadForNet;
- (BOOL)shouldUploadForTimespan;
- (BOOL)shouldUploadForFileCount;
- (void)uploadCacheFile;
- (void)clearCacheLogs;
- (void)saveLastUploadTimestamp;
- (void)cacheAnnotation:(id)a0;
- (BOOL)shouldCacheAnnotation:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reachabilityChanged:(id)a0;
- (void)dealloc;
- (void)initProperties;

@end
