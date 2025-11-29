@class NSString, BDHMXRemoteSetting, NSObject;
@protocol BDHMXSettingNetworkInfoProvider, OS_dispatch_queue, OS_dispatch_source;

@interface BDHMXSettingsManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (copy, nonatomic) NSString *aid;
@property (nonatomic) BOOL settingsFromRemote;
@property (nonatomic) BOOL settingsEmpty;
@property (retain, nonatomic) id<BDHMXSettingNetworkInfoProvider> netProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) BDHMXRemoteSetting *remoteSetting;
@property (nonatomic) long long lastUpdateTS;
@property (nonatomic) long long refreshInterval;
@property (nonatomic) long long retryTimes;
@property BOOL isFetching;
@property BOOL lastFetchSuccess;
@property BOOL isAddNetSwitchNoti;
@property BOOL isAddReachabilityNoti;

- (BOOL)checkUpdateIntervalIsOut;
- (void)stopSettingTimer;
- (void)startSettingUpdateTimer;
- (void)logMonitorStart:(long long)a0;
- (id)settingCachePath;
- (id)defaultSettingDict;
- (void)networkSwitchChangeToAvailable;
- (id)getSettingRequestHost;
- (id)getSettingRequsetPath;
- (id)getSettingRequestParams;
- (void)requestSuccessWithResponseInfoDict:(id)a0;
- (void)requestError:(id)a0;
- (void)tryUpdateRemoteSettings;
- (id)initWithProvider:(id)a0 aid:(id)a1;
- (void)updateRemoteSettingsFromOldSettings:(id)a0;
- (void)networkChanged:(id)a0;
- (void).cxx_destruct;
- (id)currentSettings;
- (void)dealloc;
- (void)requestRemoteSettings;

@end
