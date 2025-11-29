@class NSString;

@interface TTReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    int _hasCachedStatus;
    long long _cachedStatus;
    long long _cacheTime;
    BOOL _startedNotifier;
}

@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *hostAddress;
@property (readonly, nonatomic, getter=isInternetConnection) BOOL internetConnection;

+ (id)currentConnectionMethodName;
+ (id)currentAvailableCellularServices;
+ (void)serviceRadioAccessTechnologyDidChange:(id)a0;
+ (void)radioAccessTechnologyDidChange:(id)a0;
+ (id)currentCellularProviderForDataService;
+ (id)currentCellularProviderForService:(long long)a0;
+ (id)currentIPAddresses;
+ (int)currentCellularConnectionForService:(long long)a0;
+ (int)currentCellularConnectionForDataService;
+ (id)currentPrioritizedCellularProviders;
+ (id)currentPrioritizedRadioAccessTechnologies;
+ (id)reachabilityWithHostType:(long long)a0;
+ (id)IPAddressOfHostName:(id)a0 protocolFamily:(int)a1;
+ (id)IPAddressOfHostName:(id)a0;
+ (id)IPAddressOfHostName:(id)a0 protocolType:(long long)a1;
+ (id)telephoneInfo;
+ (void)delayedUpdateServiceCellularConnectionType;
+ (id)cellularData;
+ (long long)currentCellularProviders;
+ (BOOL)is2GConnectedForService:(long long)a0;
+ (BOOL)is3GConnectedForService:(long long)a0;
+ (BOOL)is4GConnectedForService:(long long)a0;
+ (BOOL)is5GConnectedForService:(long long)a0;
+ (void)checkNetworkConntectionType:(int)a0;
+ (id)currentRadioAccessTechnologyForDataService;
+ (id)currentRadioAccessTechnologyForService:(long long)a0;
+ (id)currentAvailableCellularProviders;
+ (void)setStatusCacheConfigBlock:(id /* block */)a0;
+ (id /* block */)statusCacheConfigBlock;
+ (id /* block */)queueConfigBlock;
+ (void)setQueueConfigBlock:(id /* block */)a0;
+ (void)setInternetConnectionNotifyRunLoop:(id)a0;
+ (id)internetConnectionNotifyRunLoop;
+ (void)setInternetConnectionNotifyRunLoopMode:(id)a0;
+ (id)internetConnectionNotifyRunLoopMode;
+ (void)setIgnoreDataServiceChangeEnable:(BOOL)a0;
+ (void)setIgnoreNotificationCodeEnable:(BOOL)a0;
+ (long long)fastDetectActiveIfAddrsStatus;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (BOOL)is5GConnected;
+ (void)initialize;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForInternetConnection;
+ (BOOL)isNetworkConnected;

- (long long)currentNetworkAuthorizationStatus;
- (BOOL)shouldUpdateNetworkStatus;
- (void)invalidateCachedStatus;
- (void)setCachedStatus:(long long)a0;
- (BOOL)shouldUpdateCachedStatus:(long long)a0;
- (void).cxx_destruct;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)isCellular;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)connectionRequired;
- (void)applicationDidEnterBackground:(id)a0;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (BOOL)isWifi;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;

@end
