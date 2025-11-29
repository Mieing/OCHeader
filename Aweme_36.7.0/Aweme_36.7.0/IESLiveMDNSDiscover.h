@class NSNetServiceBrowser, NSString, NSTimer, NSMutableArray;
@protocol IESLivePiperProtocol;

@interface IESLiveMDNSDiscover : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

@property (retain, nonatomic) NSNetServiceBrowser *browser;
@property (retain, nonatomic) NSString *currentServiceType;
@property (retain, nonatomic) NSString *currentServiceName;
@property (retain, nonatomic) NSMutableArray *servicesFounded;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)startDiscoverWithParams:(id)a0 completion:(id /* block */)a1;
- (void)stopDiscoverWithParams:(id)a0 completion:(id /* block */)a1;
- (void)realStartSearchWithParams:(id)a0;
- (void)allowAction:(id /* block */)a0;
- (void)denyAction:(id /* block */)a0;
- (void)trackEventWithEventType:(id)a0 IsAllow:(BOOL)a1;
- (void)timeoutReached;
- (void)invokeEventWithService:(id)a0 Message:(id)a1 bizCode:(long long)a2;
- (id)packetToData:(id)a0;
- (id)addressToIp:(id)a0;
- (id)readableTXTDictionaryFromData:(id)a0;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (id)init;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;

@end
