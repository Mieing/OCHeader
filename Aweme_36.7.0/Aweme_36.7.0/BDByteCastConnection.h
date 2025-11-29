@class BDLEConnection, BDAirPlayDisplayConnection, NSArray, BDDlnaConnection, BDByteCastService, BDByteCastHttpServerManager, NSMutableDictionary, NSString, BDLinkConnection, BDAirPlayConnection;
@protocol BDByteCastConnectionDelegate;

@interface BDByteCastConnection : NSObject <BDDlnaConnectionDelegate, BDLinkConnectionDelegate, BDAirPlayConnectionDelegate, BDAirPlayDisplayConnectionDelegate, BDLEConnectionDelegate, BDByteCastConnectionProtocol>

@property (retain, nonatomic) BDDlnaConnection *dlnaConnection;
@property (retain, nonatomic) BDLinkConnection *bdlinkConnection;
@property (retain, nonatomic) BDAirPlayConnection *airPlayConnection;
@property (retain, nonatomic) BDAirPlayDisplayConnection *airPlayDisplayConnection;
@property (retain, nonatomic) BDLEConnection *bdleConnection;
@property (retain, nonatomic) BDByteCastHttpServerManager *httpServer;
@property (copy, nonatomic) NSArray *sortedProtocolArray;
@property (retain, nonatomic) NSMutableDictionary *startConnectTimeMap;
@property (readonly, nonatomic) BDByteCastService *byteCastService;
@property (weak, nonatomic) id<BDByteCastConnectionDelegate> delegate;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isReverseConnected) BOOL reverseConnected;
@property (readonly, nonatomic) unsigned long long sdkType;
@property (readonly, copy, nonatomic) NSString *serverIp;
@property (readonly, nonatomic) long long serverPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (id)initWithByteCastService:(id)a0 delegate:(id)a1;
- (void)registerWithCallback:(id /* block */)a0;
- (void)unregisterWithCallback:(id /* block */)a0;
- (void)disConnect;
- (void)airPlayConnection:(id)a0 onError:(id)a1;
- (void)airPlayConnection:(id)a0 didConnectToDevice:(id)a1;
- (void)airPlayConnection:(id)a0 disConnectToDevice:(id)a1;
- (void)airPlayDisplayConnection:(id)a0 didDisconnectToDevice:(id)a1;
- (void)airPlayDisplayConnection:(id)a0 didConnectToDevice:(id)a1;
- (id)initWithCastId:(long long)a0 contextId:(id)a1 delegate:(id)a2;
- (void)trackStartConnectWithType:(unsigned long long)a0;
- (id)sourceDeviceInfo;
- (void)setMessageReceivedCallback:(id /* block */)a0;
- (void)setMessageReceivedCallbackV2:(id /* block */)a0;
- (void)trackConnectCostEvent:(unsigned long long)a0;
- (void)dlnaConnection:(id)a0 onError:(id)a1;
- (void)dlnaConnection:(id)a0 didConnectToService:(id)a1;
- (void)dlnaConnection:(id)a0 disConnectToService:(id)a1;
- (void)linkConnection:(id)a0 onError:(id)a1;
- (void)linkConnection:(id)a0 didConnectToLinkDevice:(id)a1;
- (void)linkConnection:(id)a0 disConnectToLinkDevice:(id)a1;
- (void)airPlayDisplayConnection:(id)a0 onError:(id)a1;
- (void)bdleConnection:(id)a0 onError:(id)a1;
- (void)bdleConnection:(id)a0 didConnectToService:(id)a1;
- (void)bdleConnection:(id)a0 disConnectToService:(id)a1;
- (id)initWithCastId:(long long)a0 delegate:(id)a1;
- (void)connectionWithMaxCount:(long long)a0 timeout:(double)a1 retryInterval:(double)a2;
- (void)appendByteCastService:(id)a0;
- (void)appendByteCastService:(id)a0 maxCount:(long long)a1 timeout:(double)a2 retryInterval:(double)a3;
- (BOOL)updateSortedProtocolArray:(id)a0 error:(id *)a1;
- (void)linkByteConnection:(id)a0 recvMeta:(id)a1;
- (void).cxx_destruct;
- (void)connect;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
