@class NSObject;
@protocol OS_dispatch_queue;

@interface Reachability : NSObject

@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
@property (retain, nonatomic) id reachabilityObject;
@property (copy, nonatomic) id /* block */ reachableBlock;
@property (copy, nonatomic) id /* block */ unreachableBlock;
@property (nonatomic) BOOL reachableOnWWAN;

+ (id)reachabilityWithHostname:(id)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(void *)a0;
+ (id)reachabilityForInternetConnection;

- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableWithFlags:(unsigned int)a0;
- (id)currentReachabilityFlags;
- (BOOL)isConnectionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)isInterventionRequired;
- (void).cxx_destruct;
- (id)currentReachabilityString;
- (BOOL)isReachable;
- (id)description;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)reachabilityChanged:(unsigned int)a0;
- (unsigned int)reachabilityFlags;
- (BOOL)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;

@end
