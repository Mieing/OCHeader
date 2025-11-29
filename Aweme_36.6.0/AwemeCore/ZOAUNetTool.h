@interface ZOAUNetTool : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;

- (int)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
- (void)dealloc;

@end
