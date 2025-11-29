@interface VeCoreReachability : NSObject {
    struct __SCNetworkReachability { } *_veCoreReachabilityRef;
}

+ (id)veCoreReachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)veCoreReachabilityForInternetConnection;
+ (void)initialize;

- (void)veCoreStopNotifier;
- (long long)veCoreNetworkStatusForFlags:(unsigned int)a0;
- (BOOL)veCoreStartNotifier;
- (long long)veCoreCurrentReachabilityStatus;
- (void)dealloc;

@end
