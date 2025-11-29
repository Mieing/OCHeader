@class NSObject;
@protocol OS_dispatch_queue;

@interface QBReachability : NSObject

@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
@property (retain, nonatomic) id reachabilityObject;
@property (nonatomic) BOOL reachableOnWWAN;

+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;
- (void)dealloc;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)isReachableWithFlags:(unsigned int)a0;
- (BOOL)isReachable;
- (BOOL)isReachableViaWiFi;
- (long long)currentReachabilityStatus;
- (void)reachabilityChanged:(unsigned int)a0;
- (void).cxx_destruct;

@end
