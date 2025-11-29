@class NSString, SRWebSocket;

@interface WARemoteDebugWANChannel : WARemoteDebugChannel <SRWebSocketDelegate> {
    SRWebSocket *_webSocket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedQueue;

- (BOOL)isConnected;
- (void)openChannel;
- (void)closeChannel;
- (void)sendData:(id)a0;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)webSocket:(id)a0 didReceiveMessageWithData:(id)a1;
- (void).cxx_destruct;

@end
