@class TXCAsyncSocket, NSString, TXCIPCTunnelEndPoint, NSObject;
@protocol OS_dispatch_queue, TXCIPCTunnelTransportDelegate;

@interface TXCIPCTunnelTransport : NSObject <TXCAsyncSocketDelegate>

@property (retain, nonatomic) TXCAsyncSocket *socket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;
@property (retain, nonatomic) TXCIPCTunnelEndPoint *endpoint;
@property (weak, nonatomic) id<TXCIPCTunnelTransportDelegate> delegate;
@property (nonatomic) int current_packet_type;
@property (nonatomic) int listenPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEndPoint:(id)a0 delegate:(id)a1;
- (void)sendBuffer:(id)a0;
- (void)connect;
- (void)accept;
- (void)disconnect;
- (void)readPacketHeader;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)socket:(id)a0 didAcceptNewSocket:(id)a1;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socket:(id)a0 didConnectToUrl:(id)a1;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2 memoryOwner:(id)a3;
- (void).cxx_destruct;

@end
