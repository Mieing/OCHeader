@class NSObject;
@protocol OS_dispatch_queue;

@interface Q2DMapReachability : NSObject

@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
@property (retain, nonatomic) id reachabilityObject;
@property (copy, nonatomic) id /* block */ reachableBlock;
@property (copy, nonatomic) id /* block */ unreachableBlock;
@property (nonatomic) BOOL reachableOnWWAN;

+ (id)reachabilityWithHostname:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;
- (void)dealloc;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)isReachableWithFlags:(unsigned int)a0;
- (BOOL)isReachable;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isConnectionRequired;
- (BOOL)connectionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)isInterventionRequired;
- (int)currentReachabilityStatus;
- (unsigned int)reachabilityFlags;
- (id)currentReachabilityString;
- (id)currentReachabilityFlags;
- (void)reachabilityChanged:(unsigned int)a0;
- (id)description;
- (void).cxx_destruct;

@end
