@class NSString, NSMutableDictionary;
@protocol WsDelegate;

@interface BDXBridgeWebSocketManager : BDXBridgeMethod <WsDelegate>

@property (retain, nonatomic) NSMutableDictionary *socketTaskIDsForContainer;
@property (retain, nonatomic) NSMutableDictionary *socketTaskDict;
@property (weak, nonatomic) id<WsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)onPushMessageReceived:(id)a0 message:(id)a1 type:(unsigned long long)a2;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)closeConnection:(id)a0;
- (BOOL)closeAllConnectionsInContainerID:(id)a0;
- (id)startConnection:(id)a0 inContainer:(id)a1 paramModel:(id)a2;
- (BOOL)writeConnectionToSocket:(id)a0 withData:(id)a1;
- (void)conatinerDealloc:(id)a0;
- (id)pushManagerForSocketTaskID:(id)a0;
- (void)removeSocketWithTaskID:(id)a0;
- (id)socketTaskIDForPushManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
