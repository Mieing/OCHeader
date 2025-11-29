@class NSString, HMDHeimdallrConfig, HMDTTMonitorUserInfo;

@interface HMDMonitorDataManager2 : NSObject <HMDNetworkProvider> {
    BOOL _needCacheChangeCallbacked;
    long long _needCacheState;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _flagMutex;
}

@property (retain, nonatomic) HMDTTMonitorUserInfo *userInfo;
@property (retain, nonatomic) NSString *appID;
@property (nonatomic) void *configProviderPtr;
@property (nonatomic) BOOL isAppMonitor;
@property (readonly, nonatomic) HMDHeimdallrConfig *config;
@property (readonly, nonatomic) BOOL needCache;
@property (copy, nonatomic) id /* block */ stopCacheBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needCache;
- (void)configDidUpdate:(id)a0;
- (id)reportHeaderParams;
- (id)reportCommonParams;
- (BOOL)enableBackgroundUpload;
- (void)__updateSDKFetchSettings;
- (id)initMonitorWithAppID:(id)a0 userInfo:(id)a1;
- (id)config;
- (void).cxx_destruct;
- (void)dealloc;

@end
