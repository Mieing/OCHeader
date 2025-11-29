@class NSObject;
@protocol OS_dispatch_queue;

@interface AMapFoundationReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilitySerialQueue;
    BOOL _isStartNotifying;
}

+ (id)sharedInstance;

- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableWithFlags:(unsigned int)a0;
- (void)localConnectionChanged;
- (id)currentConnectionFlags;
- (void).cxx_destruct;
- (BOOL)isReachable;
- (id)init;
- (void)startNotifier;
- (void)stopNotifier;
- (unsigned int)reachabilityFlags;
- (long long)currentNetworkType;
- (void)dealloc;

@end
