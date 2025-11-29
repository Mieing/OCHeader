@class TTPushConfig, NSString, IESECPushManagerMonitor, TTPushManager;
@protocol IESECPushManagerDelegate;

@interface IESECPushManager : NSObject <WsDelegate, IESECPushManagerProtocol>

@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) TTPushConfig *pushConfig;
@property (retain, nonatomic) IESECPushManagerMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESECPushManagerDelegate> delegate;

- (void)configConnection:(id)a0;
- (void)asyncStartConnection;
- (void)asyncStopConnection;
- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)asyncSendPushMessage:(id)a0;
- (id)p_customParamsWithConfig:(id)a0;
- (id)p_convertPayloadToJsonData:(id)a0;
- (BOOL)p_isEcomChannel:(id)a0;
- (id)p_convertJsonDataToPayload:(id)a0;
- (BOOL)p_asyncAckWithMessage:(id)a0;
- (BOOL)p_isEcomWsURL:(id)a0;
- (void)p_handleNetworkChange:(long long)a0;
- (void)onReachabilityChanged:(id)a0;
- (void)onAppDidBecomeActive:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)init;
- (void)dealloc;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
