@class SRWebSocket, NSString;
@protocol AmoebaWSMessageDelegate;

@interface DataReportAbilityProviderWSImpl : NSObject <SRWebSocketDelegate, AmoebaAbilityProviderWS>

@property (retain, nonatomic) SRWebSocket *webSocket;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) id<AmoebaWSMessageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect:(id)a0 delegate:(id)a1;
- (void)sendString:(id)a0;
- (void)sendData:(id)a0;
- (void)close;
- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didReceivePong:(id)a1;
- (void).cxx_destruct;

@end
