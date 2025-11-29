@interface MS_NetworkReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)ms_currentReachabilityString;
+ (id)ms_reachabilityForInternetConnection;
+ (id)ms_reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)ms_reachabilityWithHostName:(id)a0;

- (void)ms_stopNotifier;
- (BOOL)ms_connectionRequired;
- (unsigned long long)ms_currentReachabilityStatus;
- (BOOL)ms_startNotifier;
- (unsigned long long)networkStatusForFlags:(unsigned int)a0;
- (void)dealloc;

@end
