@class NSString, BDLinkUtils, BDLinkDevice, NSObject;
@protocol BDLinkConnectionDelegate;

@interface BDLinkConnection : NSObject <BDByteCastConnectionProtocol>

@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL delayDisconnect;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) BDLinkUtils *bdlinkUtils;
@property (weak, nonatomic) NSObject<BDLinkConnectionDelegate> *delegate;
@property (readonly, nonatomic) BDLinkDevice *linkDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disConnect;
- (id)initWithLinkService:(id)a0 delegate:(id)a1;
- (void)connectWithNetworkCheck:(BOOL)a0 maxCount:(long long)a1 timeout:(double)a2 retryInterval:(double)a3;
- (void)registerWithSourceDeviceInfo:(id)a0 andCallback:(id /* block */)a1;
- (void)unregisterWithSourceDeviceInfo:(id)a0 andCallback:(id /* block */)a1;
- (void)checkConnectWithMaxCount:(long long)a0 timeout:(double)a1 retryInterval:(double)a2 completion:(id /* block */)a3;
- (void)checkServiceAlive:(id)a0 maxCount:(long long)a1 timeout:(double)a2 retryInterval:(double)a3 completion:(id /* block */)a4;
- (void)checkWithDevice:(id)a0 timeout:(double)a1 retryInterval:(double)a2 count:(long long)a3 maxCount:(long long)a4 checkCompletion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)connect;

@end
