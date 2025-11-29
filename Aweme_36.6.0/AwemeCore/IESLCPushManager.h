@class NSArray, TTPushManager, NSString;
@protocol IESLCPushManagerDelegate;

@interface IESLCPushManager : NSObject <WsDelegate, IESLCPushManagerProtocol>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (copy) NSArray *urlArray;
@property (nonatomic) BOOL disableLongConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCPushManagerDelegate> delegate;

+ (int)clientVersionNumber;
+ (int)clientPlatformNumber;
+ (int)clientNetworkStatus;
+ (int)clientVersionNumberOfShorVersionString:(id)a0;

- (void)startConnectionWithConfig:(id)a0;
- (BOOL)sendPushMessage:(id)a0;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)p_setupPushManager;
- (unsigned long long)convertIESLCTransportTypeToTT:(unsigned long long)a0;
- (void)p_handleConnectionStateChanged:(unsigned long long)a0 url:(id)a1;
- (void)p_handleConnectionError:(id)a0 state:(unsigned long long)a1 url:(id)a2;
- (void)handlePushManagerConnectionStateChanged:(id)a0;
- (void)handlePushManagerConnectionError:(id)a0;
- (BOOL)p_isUrlValid:(id)a0;
- (unsigned long long)ttConnectionStateConvertToIESLCConnectionState:(unsigned long long)a0;
- (void)setupMessageReceiver:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)init;
- (void)stopConnection;
- (void)p_addObservers;

@end
