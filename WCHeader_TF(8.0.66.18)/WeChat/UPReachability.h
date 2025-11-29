@interface UPReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (long long)currentReachabilityStatus;

@end
