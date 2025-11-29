@class GCDAsyncUdpSocket, NSMutableDictionary, NSTimer, NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface BDByteCastSSDPProber : NSObject <GCDAsyncUdpSocketDelegate, BDByteCastProberProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) GCDAsyncUdpSocket *unicastUdpSocket;
@property (retain, nonatomic) GCDAsyncUdpSocket *multicastUdpSocket;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long repeatTimes;
@property (retain, nonatomic) NSMutableDictionary *foundHosts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *currentHostAddress;
@property (copy, nonatomic) NSSet *blackIpsSet;
@property (nonatomic) long long probeTimes;
@property (copy, nonatomic) id /* block */ onProbeResult;

- (id)initWithContextId:(id)a0;
- (void)startProbe;
- (void)stopProbe;
- (id)createAndInitSocket;
- (void)sendProbeMessage;
- (id)buildProbeMessageWithType:(int)a0;
- (id)headerValueForKey:(id)a0 inData:(id)a1;
- (id)getHostFromUrl:(id)a0;
- (id)getPortFromUrl:(id)a0;
- (void)udpSocket:(id)a0 didReceiveData:(id)a1 fromAddress:(id)a2 withFilterContext:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
