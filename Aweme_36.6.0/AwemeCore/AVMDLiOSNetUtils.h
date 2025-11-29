@class NSObject;
@protocol OS_dispatch_queue;

@interface AVMDLiOSNetUtils : NSObject {
    NSObject<OS_dispatch_queue> *_networkQueue;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic) BOOL scheduleing;
@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (nonatomic) BOOL Ipv4Reachable;
@property (nonatomic) BOOL Ipv6Reachable;

+ (BOOL)getNetworkIndex:(unsigned int *)a0 cellularIndex:(unsigned int *)a1;
+ (id)convertAddrToString:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)shareInstance;

- (void)probdIpv4Reachable;
- (void)probdIpv6Reachable;
- (id)getStateString;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
