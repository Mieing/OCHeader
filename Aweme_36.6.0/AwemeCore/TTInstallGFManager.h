@class TTInstallDtraitConfig, TTInstallGFConfig, NSMutableArray, TTInstallCacheDtrait;

@interface TTInstallGFManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _dtraitConfigRefreshCallbacksMutex;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lowRiskSecDtraitLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _highRiskSecDtraitLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _preloadDtraitLock;
}

@property (retain) TTInstallGFConfig *localConfig;
@property (retain, nonatomic) NSMutableArray *dtraitConfigRefreshCallbacks;
@property (retain) TTInstallDtraitConfig *localDtraitConfig;
@property (nonatomic) long long refreshDtraitTime;
@property (nonatomic) long long lastCipherTrackTime;
@property (retain, nonatomic) TTInstallCacheDtrait *lowRiskSecDtrait;
@property (retain, nonatomic) TTInstallCacheDtrait *highRiskSecDtrait;

+ (id)sharedInstance;

- (void)saveRemoteConfigIfNeeded:(id)a0;
- (id)swordData:(id)a0;
- (id)generateGFCollectHeader:(id)a0;
- (id)collectDR2:(id)a0;
- (id)collectDR1:(id)a0;
- (id)collectDM1:(id)a0;
- (id)collectDC0:(id)a0 path:(id)a1;
- (id)collectDO0:(id)a0 path:(id)a1;
- (id)collectDO1:(id)a0 path:(id)a1;
- (id)collectDB0:(id)a0;
- (id)generateGFCollectBody;
- (void)delayCollectGFAfterRegisterSuccess;
- (void)handleCollectGF:(BOOL)a0 callback:(id /* block */)a1;
- (void)startStatusCollectWithFetchConfig:(BOOL)a0 secDtrait:(id)a1 retryCount:(int)a2 callback:(id /* block */)a3;
- (void)startStatusCollectWithParams:(id)a0 secDtrait:(id)a1 retryCount:(int)a2 callback:(id /* block */)a3;
- (id)encryptGFStringWithData:(id)a0 duration:(long long)a1 errorMsg:(id)a2 key:(id)a3;
- (id)encryptConfigFromFile;
- (void)saveEncryptConfigWith:(id)a0;
- (BOOL)dtraitCollectConfigEmpty;
- (void)preloadDtrait;
- (void)preGenerateDtrait:(id)a0 callback:(id /* block */)a1;
- (void)getLowRiskSecDtrait:(id)a0 callback:(id /* block */)a1;
- (void)getHighRiskSecDtrait:(id)a0 callback:(id /* block */)a1;
- (void)getDtraitWithType:(long long)a0 timeout:(unsigned long long)a1 forceRefresh:(BOOL)a2 path:(id)a3 callback:(id /* block */)a4;
- (id)dtraitConfigFromFile;
- (void)saveDtraitConfig:(id)a0;
- (void)addDtraitConfigRefreshCallback:(id /* block */)a0;
- (void)notifyDtraitConfigRefresh;
- (void)refreshDtraitConfig:(id)a0;
- (id)configRefreshLog:(id)a0;
- (void)requestBindDtrait;
- (void)trackPreloadDtrait:(BOOL)a0 startTime:(long long)a1 path:(id)a2;
- (void)trackGetSecDtrait:(id)a0 startTime:(long long)a1 type:(long long)a2 path:(id)a3 timeout:(unsigned long long)a4 useCache:(BOOL)a5;
- (void).cxx_destruct;
- (id)init;

@end
