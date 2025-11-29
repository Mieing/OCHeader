@protocol IESVideoPreloadProtocol;

@interface AWEOfflineVideoDownloader : NSObject

@property (retain, nonatomic) id<IESVideoPreloadProtocol> preloader;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) unsigned long long failedCount;
@property (nonatomic) double foregroundTime;
@property (nonatomic) BOOL isWifiWhenEnterBackground;

+ (id)sharedInstance;

- (void)handleConnectionChanged:(id)a0;
- (id)awemeLogStringWithModel:(id)a0;
- (void)cancelAllTask;
- (void)removeAllLocalPush;
- (void)addDownloadTaskWithModel:(id)a0;
- (void)addDownloadTaskWithModels:(id)a0;
- (void)pauseAllDownloadTaskIfNeeded;
- (void)handleFirstSetup;
- (id)needDownloadingModels;
- (id)currentDownloadingModels;
- (void)realStartDownloadWithModel:(id)a0;
- (void)startDownloadIfNeededAndNotify:(BOOL)a0;
- (void)startDownloadIfNeededWithIgnoreModel:(id)a0 andNotify:(BOOL)a1;
- (void)realPauseDownloadWithModel:(id)a0;
- (void)noDuplicateAddModel:(id)a0;
- (void)downloadProgressUpdateWithModel:(id)a0 cacheSize:(double)a1 mediaSize:(double)a2;
- (void)downloadSuccessWithModel:(id)a0;
- (void)downloadFailedWithModel:(id)a0;
- (BOOL)isFileExistWithModel:(id)a0;
- (void)toastIfDownloadDirectorError;
- (void)moveFileWithModel:(id)a0;
- (void)handleBackgroundPush;
- (void)networkWaitAllDownloadTaskIfNeeded;
- (void)recoverDownloadTaskStats:(BOOL)a0;
- (void)handleEnterForegroundConnectionChanged;
- (void)sendLocalPush;
- (void)startDownloadIfNeededWithIgnoreModel:(id)a0 andNotify:(BOOL)a1 useNetworkTraffic:(BOOL)a2;
- (void)startDownloadTaskWithModel:(id)a0;
- (void)pauseDownloadTaskWithModel:(id)a0;
- (void)cancelDownloadTaskWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)createDirectoryIfNeeded;
- (id)cacheDirectory;
- (void)dealloc;
- (void)setup;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)startDownloadIfNeeded;

@end
