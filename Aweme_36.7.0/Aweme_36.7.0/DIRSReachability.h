@class NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface DIRSReachability : NSObject

@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue;
@property (retain, nonatomic) NSLock *locker;
@property (nonatomic) int status;
@property (copy, nonatomic) id /* block */ reachabilityStatusNotifier;

+ (id)reachability;

- (void)updateToLatest;
- (void).cxx_destruct;
- (void)start;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;

@end
