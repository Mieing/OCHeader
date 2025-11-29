@interface IESLiveIMUnifiedWebSocketFetcher : IESLiveIMWebSocketFetcher

@property (nonatomic) double startConnectTime;
@property (nonatomic) BOOL isConnectting;
@property (nonatomic) BOOL isTimeout;
@property (copy, nonatomic) id /* block */ registeredBusinessArray;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)asyncAckWithPacket:(id)a0;
- (void)checkConnectState;
- (void)fetchWithContext:(id)a0 state:(id /* block */)a1 data:(id /* block */)a2;
- (void)trackUnifiedWsConnectStatus:(BOOL)a0;
- (id)getAckParamsFromPacket:(id)a0;
- (id)customDataWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
