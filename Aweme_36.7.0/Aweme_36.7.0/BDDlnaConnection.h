@class NSString, BDDlnaService, BDCLUPnPServer, NSObject;
@protocol BDDlnaConnectionDelegate;

@interface BDDlnaConnection : NSObject <BDByteCastConnectionProtocol>

@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL delayDisconnect;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) BDCLUPnPServer *upnpServer;
@property (weak, nonatomic) NSObject<BDDlnaConnectionDelegate> *delegate;
@property (readonly, nonatomic) BDDlnaService *dlnaService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disConnect;
- (id)initWithDlnaService:(id)a0 delegate:(id)a1;
- (void)connectWithNetworkCheck:(BOOL)a0 maxCount:(long long)a1 timeout:(double)a2 retryInterval:(double)a3;
- (void)checkConnectWithMaxCount:(long long)a0 timeout:(double)a1 retryInterval:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)connect;

@end
