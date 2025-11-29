@class BDLEService, NSMutableDictionary, BDCLUPnPServer, NSString, NSLock;
@protocol BDLEConnectionNotifyDelegate, BDLEConnectionDelegate;

@interface BDLEConnection : NSObject <BDLEMessageBusDelegate, BDLEMessageBusEventDataSource, BDCLUPnPServerDelegate, BDByteCastPPSessionProtocol>

@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) NSMutableDictionary *requestMap;
@property (retain, nonatomic) NSLock *requestMapLock;
@property (retain, nonatomic) BDCLUPnPServer *upnpServer;
@property (retain, nonatomic) BDCLUPnPServer *researchUpnpServer;
@property (copy, nonatomic) id /* block */ researchTimeoutBlock;
@property (nonatomic) BOOL isResearching;
@property (nonatomic) BOOL isReconnecting;
@property (weak, nonatomic) id<BDLEConnectionDelegate> delegate;
@property (weak, nonatomic) id<BDLEConnectionNotifyDelegate> notifyDelegate;
@property (readonly, nonatomic) BDLEService *bdleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBDLEService:(id)a0 delegate:(id)a1;
- (void)connectWithNetworkCheck:(BOOL)a0 maxCount:(long long)a1 timeout:(double)a2 retryInterval:(double)a3;
- (void)upnpSearchChangeWithResults:(id)a0;
- (void)trackBDLEError:(id)a0;
- (void)startUpnpResearch;
- (void)sendRequest:(id)a0 retryCount:(long long)a1 completionHandler:(id /* block */)a2;
- (void)stopUpnpResearch;
- (void)messageBus:(id)a0 didConnected:(id)a1;
- (void)messageBus:(id)a0 didDisconnected:(id)a1;
- (void)messageBus:(id)a0 didReceiveSinkRequest:(id)a1;
- (void)messageBus:(id)a0 onSocketPipeBlocked:(id)a1;
- (id)messageBus:(id)a0 eventExtraDictionary:(id)a1;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
