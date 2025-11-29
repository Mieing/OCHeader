@class TXCIPCTunnelTransport, NSString;
@protocol TXCMediaStreamIPCTunnelServerDelegate;

@interface TXCMediaStreamIPCTunnelServer : NSObject <TXCIPCTunnelTransportDelegate>

@property (retain, nonatomic) TXCIPCTunnelTransport *transport;
@property (nonatomic) BOOL isConnected;
@property (weak, nonatomic) id<TXCMediaStreamIPCTunnelServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppGroup:(id)a0 delegate:(id)a1;
- (void)startListen;
- (void)sendSamplePacketWithCmd:(unsigned int)a0;
- (void)requestIFrame;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)sendVersion;
- (void)sendTime;
- (void)updateEncoderParams:(struct EncodeParamsTypeHeader { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a0;
- (void)setCoverImage:(struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::CoverImageTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::CoverImageTypeHeader>>> { struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::CoverImageTypeHeader> *, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::CoverImageTypeHeader>>> { void *x0; } x0; })a0;
- (void)onReceivePacket:(int)a0 data:(id)a1;
- (void)onConnect;
- (void)onAccept;
- (void)onDisconnect;
- (void).cxx_destruct;

@end
