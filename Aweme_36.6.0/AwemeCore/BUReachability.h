@interface BUReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    int _hasCachedStatus;
    long long _cachedStatus;
    BOOL _startedNotifier;
}

+ (long long)fastDetectActiveIfAddrsStatus;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (void)initialize;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForInternetConnection;
+ (BOOL)isNetworkConnected;

- (long long)currentNetworkAuthorizationStatus;
- (void)invalidateCachedStatus;
- (void)setCachedStatus:(long long)a0;
- (BOOL)shouldUpdateCachedStatus:(long long)a0;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)connectionRequired;
- (void)applicationDidEnterBackground:(id)a0;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;

@end
