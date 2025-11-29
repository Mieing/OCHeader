@class GCDAsyncUdpSocket, NSString, NSTimer, NSData, NSObject;
@protocol BDLinkSsdpBrowserDelegate;

@interface BDLinkSsdpBrowser : NSObject <GCDAsyncUdpSocketDelegate, NSObject>

@property (retain, nonatomic) GCDAsyncUdpSocket *unicastUdpSocket;
@property (retain, nonatomic) GCDAsyncUdpSocket *multicastUdpSocket;
@property (nonatomic) BOOL udpSocketInited;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isBroadcastEnable;
@property (nonatomic) long long timerCounter;
@property (retain, nonatomic) NSData *multicastData;
@property (retain, nonatomic) NSData *broadcastData;
@property (nonatomic) BOOL preferEnableBroadcast;
@property (weak, nonatomic) NSObject<BDLinkSsdpBrowserDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)udpSocket:(id)a0 didSendDataWithTag:(long long)a1;
- (void)udpSocket:(id)a0 didNotSendDataWithTag:(long long)a1 dueToError:(id)a2;
- (void)udpSocket:(id)a0 didReceiveData:(id)a1 fromAddress:(id)a2 withFilterContext:(id)a3;
- (void)udpSocketDidClose:(id)a0 withError:(id)a1;
- (void)processDeviceData:(id)a0 fromSocket:(id)a1;
- (void).cxx_destruct;
- (void)search;
- (void)stopBrowsing;
- (void)dealloc;
- (void)startBrowsing;
- (void)onError:(id)a0;
- (void)sendData;

@end
