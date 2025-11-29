@interface EAccountReachability : NSObject {
    BOOL _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (long long)currentWWANtype;
+ (id)WWANType;
+ (long long)accessTypeForString:(id)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)connectionRequired;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (long long)currentReachabilityStatus;
- (void)dealloc;

@end
