@class NSString, NSMutableDictionary;
@protocol BDPPublicWebSocketDelegateIG;

@interface BDPPluginPublicWebSocketIG : BDPBridgeInstancePlugin <SRWebSocketDelegate>

@property (retain, nonatomic) NSMutableDictionary *sockets;
@property (weak, nonatomic) id<BDPPublicWebSocketDelegateIG> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)closeAllSocket:(long long)a0 reason:(id)a1;
- (BOOL)sendSocket:(id)a0 param:(id)a1 error:(id *)a2;
- (void)closeSocket:(id)a0 param:(id)a1;
- (id)taskIDWithSocket:(id)a0;
- (void)sendSocket:(id)a0 msg:(id)a1;
- (void)createSocketWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateSocketWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
