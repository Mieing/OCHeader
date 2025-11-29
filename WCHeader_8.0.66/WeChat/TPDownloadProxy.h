@class NSMutableDictionary;

@interface TPDownloadProxy : NSObject

@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSMutableDictionary *storageMap;

+ (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)a0;

- (id)initWithServiceType:(int)a0;
- (int)initDownloadProxy:(id)a0;
- (int)deinit;
- (void)setLogDelegate:(id)a0;
- (void)setProxyDelegate:(id)a0;
- (int)startPlay:(id)a0 downloadParam:(id)a1 delegate:(id)a2;
- (int)startClipPlay:(id)a0 clipNo:(int)a1 delegate:(id)a2;
- (BOOL)setClipInfo:(int)a0 clipNo:(int)a1 clipFileId:(id)a2 downloadParam:(id)a3;
- (id)getPlayUrl:(int)a0 urlType:(int)a1;
- (id)getClipPlayUrl:(int)a0 clipNo:(int)a1;
- (id)getPlayErrorCodeStr:(int)a0;
- (int)checkResourceStatus:(id)a0 resourceID:(id)a1 fileFormat:(int)a2;
- (long long)getResourceSize:(id)a0 resourceID:(id)a1;
- (void)stopPlay:(int)a0;
- (int)pauseDownload:(int)a0;
- (int)resumeDownload:(int)a0;
- (int)startPreload:(id)a0 downloadParam:(id)a1 delegate:(id)a2;
- (int)startClipPreload:(id)a0 clipNo:(int)a1 delegate:(id)a2;
- (void)stopPreload:(int)a0;
- (void)setUserData:(id)a0 value:(id)a1;
- (void)pushEvent:(long long)a0;
- (int)startOfflineDownload:(id)a0 downloadParam:(id)a1 delegate:(id)a2;
- (int)startClipOfflineDownload:(id)a0 clipCount:(int)a1 delegate:(id)a2;
- (void)startTask:(int)a0;
- (int)stopOfflineDownload:(int)a0;
- (int)removeStorageCache:(id)a0;
- (int)clearCache:(id)a0 resourceID:(id)a1 mode:(unsigned long long)a2;
- (void)updateStoragePath:(id)a0;
- (void)setMaxStorageSizeMB:(long long)a0;
- (void)setPlayState:(int)a0 state:(int)a1;
- (void)setPlayer:(int)a0 ResourceloaderProxyCallback:(void *)a1;
- (void)updateTaskInfo:(int)a0 key:(id)a1 value:(id)a2;
- (void).cxx_destruct;

@end
