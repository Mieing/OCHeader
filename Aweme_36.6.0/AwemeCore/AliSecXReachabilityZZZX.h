@interface AliSecXReachabilityZZZX : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;

- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (long long)currentReachabilityStatus;
- (void)dealloc;

@end
