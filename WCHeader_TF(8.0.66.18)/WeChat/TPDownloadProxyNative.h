@class NSRecursiveLock, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TPDownloadProxyNative : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkActiveQueue;
@property (copy, nonatomic) NSString *currentStoragePath;
@property (nonatomic) BOOL isNativeInit;
@property (retain, nonatomic) NSMutableDictionary *serviceTypeParams;
@property (nonatomic) unsigned long long bgTask;
@property (nonatomic) BOOL isReinitFinish;
@property (retain, nonatomic) NSRecursiveLock *serviceLock;
@property (nonatomic) unsigned long long lastCheckTimeMs;
@property (nonatomic) int timeoutMs;
@property (nonatomic) int localServerCheckTimeInterval;
@property (nonatomic) BOOL enableCheckLocalServer;
@property (nonatomic) BOOL enableCheckLocalServerOnCreate;

+ (id)sharedInstance;

- (id)init;
- (int)initService:(int)a0 param:(id)a1;
- (int)deinitService:(int)a0;
- (unsigned long long)genCurrentTimeInMs;
- (void)reinitServiceWithReason:(long long)a0;
- (void)checkLocalServerActive:(long long)a0;
- (void)checkLocalServerActive:(long long)a0 completion:(id /* block */)a1;
- (int)updateStoragePathWithServiceType:(int)a0 path:(id)a1;
- (int)setMaxStorageSizeMBWithServiceType:(int)a0 maxStorageSizeMB:(long long)a1;
- (id)getVersion;
- (id)getErrorCodeStr:(int)a0;
- (id)getNativeInfo:(int)a0;
- (int)checkResourceStatus:(id)a0 resourceID:(id)a1 fileFormat:(int)a2;
- (long long)getResourceSize:(id)a0 resourceID:(id)a1;
- (id)getHLSOfflineExttagWithVid:(id)a0 linkVid:(id)a1 formatId:(int)a2 randomNum:(long long)a3;
- (void)setUserData:(id)a0 value:(id)a1;
- (void)setServiceConfig:(int)a0 value:(id)a1;
- (void)pushEvent:(long long)a0;
- (int)createDownloadTask:(int)a0 fileId:(id)a1 dlType:(int)a2 clipCount:(int)a3;
- (int)setClipInfo:(int)a0 clipNo:(int)a1 clipKeyId:(id)a2 dlType:(int)a3 urls:(id)a4 savePath:(id)a5 extraInfo:(id)a6;
- (id)getClipPlayUrl:(int)a0 clipNo:(int)a1 urlType:(int)a2;
- (int)startDownload:(int)a0;
- (int)stopDownload:(int)a0;
- (int)pauseDownload:(int)a0;
- (int)resumeDownload:(int)a0;
- (int)deleteCacheWithResourceId:(id)a0;
- (int)clearCache:(id)a0 resourceId:(id)a1 mode:(unsigned long long)a2;
- (long long)verifyOfflineCacheSync:(id)a0 fileFormat:(int)a1 resourceId:(id)a2 keyId:(id)a3;
- (void)setPlayerState:(int)a0 state:(int)a1;
- (void)updateTaskInfo:(int)a0 key:(id)a1 value:(id)a2;
- (void)updatePlayerPlayMsgWithTaskId:(int)a0 playPositionSecond:(int)a1 playerRemainTimeSecond:(int)a2 advRemainTimeSecond:(int)a3;
- (void)setTask:(int)a0 ResourceloaderProxyCallback:(void *)a1;
- (BOOL)initNative;
- (void)activeService;
- (void)enterBackground:(id)a0;
- (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)a0;
- (void)enterForeground:(id)a0;
- (void)appwillTerminate:(id)a0;
- (void)receiveMemoryWarning:(id)a0;
- (void)backgroundTaskHandler;
- (void).cxx_destruct;

@end
