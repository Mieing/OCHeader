@class NSArray, NSMutableArray;

@interface AWENetworkPingTask : NSObject

@property (retain, nonatomic) NSArray *icmp_detect;
@property (retain, nonatomic) NSArray *tcp_dectect;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property BOOL success;
@property (nonatomic) BOOL isPinging;
@property (nonatomic) long long taskID;
@property (nonatomic) double icmpTimeout;
@property (nonatomic) double tcpTimeout;
@property (copy, nonatomic) NSArray *srcs;

- (id)initWithPingSources:(id)a0;
- (void)pingWithBlock:(id /* block */)a0;
- (void)_pingWithBlock:(id /* block */)a0;
- (void)didEndDetect:(BOOL)a0 latency:(double)a1 stage:(unsigned long long)a2;
- (void)timeoutCallBack;
- (void).cxx_destruct;
- (void)dealloc;

@end
