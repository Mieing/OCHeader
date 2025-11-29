@class NSMutableDictionary, NSTimer, NSString, NSSet, NSMutableArray;

@interface BDByteCastMDNSProber : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, BDByteCastProberProtocol>

@property (retain, nonatomic) NSMutableArray *browsers;
@property (retain, nonatomic) NSMutableArray *foundNetService;
@property (retain, nonatomic) NSMutableDictionary *foundHosts;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long repeatTimes;
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
- (void)initBrowser;
- (void)stopProbe;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netServiceWillResolve:(id)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceBrowserDidStopSearch:(id)a0;

@end
