@class NSString, BDByteCastConnection;
@protocol BDSCDeviceProtocol, BDSCConnectionDelegate;

@interface BDSCConnection : NSObject <BDByteCastConnectionDelegate, BDSCConnectionProtocol>

@property (retain, nonatomic) BDByteCastConnection *byteCastConnection;
@property (retain, nonatomic) id<BDSCDeviceProtocol> device;
@property (weak, nonatomic) id<BDSCConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, copy, nonatomic) NSString *protocolType;
@property (readonly, nonatomic) id engine;

+ (id)connectionWithDevice:(id)a0 delegate:(id)a1;
+ (BOOL)canCreateByDevice:(id)a0;

- (void)registerWithCallback:(id /* block */)a0;
- (void)unregisterWithCallback:(id /* block */)a0;
- (void)disConnect;
- (void)byteCastConnection:(id)a0 onError:(id)a1;
- (void)byteCastConnection:(id)a0 didConnectToService:(id)a1;
- (void)byteCastConnection:(id)a0 disConnectToService:(id)a1;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (void)setMessageReceivedCallback:(id /* block */)a0;
- (void)updateSortedProtocolArray:(id)a0;
- (void).cxx_destruct;
- (void)connect;

@end
