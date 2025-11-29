@interface MarsReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (int)getCacheReachabilityStatus:(BOOL)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (BOOL)MarsstartNotifier;
- (void)MarsstopNotifier;
- (int)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (int)currentReachabilityStatus;
- (void)dealloc;

@end
