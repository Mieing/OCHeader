@interface FlowIMX.FlowIMConnectionServiceImpl : NSObject <IESLCConnectService, FlowIMX.FlowIMConnectionService, IESLCMessageHandlerService> {
    void /* unknown type, empty encoding */ firstConnectTrackerStages;
    void /* unknown type, empty encoding */ receivers;
    void /* unknown type, empty encoding */ delegateArray;
}

@property (nonatomic) long long connectionState;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)ieslc_onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 errorStr:(id)a3 errorDict:(id)a4;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)startConnectionWithConfig:(id)a0;
- (void)addDelegateWithDelegate:(id)a0;
- (void)removeDelegateWithDelegate:(id)a0;
- (void)addReceiverWithReceiver:(id)a0;
- (void)removeReceiverWithReceiver:(id)a0;
- (void)onChangeConnectionStatus:(id)a0;
- (void)onConnectionFailed:(id)a0;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)init;
- (BOOL)reachabilityStatus;
- (void)stopConnection;
- (void)dealloc;

@end
