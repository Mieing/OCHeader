@class NSDictionary, NSString, NSMutableDictionary;
@protocol BDPBindingWebSocketDelegate;

@interface BDPBindingWebSocketModule : NSObject <SRWebSocketDelegate, BDPCommonBridgeModule> {
    NSMutableDictionary *_sockets;
}

@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;

@property (weak, nonatomic) id<BDPBindingWebSocketDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (id)createSocket:(id)a0 taskID:(id)a1;
- (id)operateSocket:(id)a0;
- (void)closeAllSocket:(long long)a0 reason:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
