@class NSString, TTPushMessageDispatcher, NSObject;
@protocol OS_dispatch_queue, WsDelegate;

@interface TTPushManager : NSObject <Push> {
    void *pushDelegate;
    void *ppDelegate;
    struct unique_ptr<net::WSClient::ConnectionParams, std::default_delete<net::WSClient::ConnectionParams>> { struct __compressed_pair<net::WSClient::ConnectionParams *, std::default_delete<net::WSClient::ConnectionParams>> { struct ConnectionParams *__value_; } __ptr_; } parameters;
}

@property (retain) TTPushMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatch_queue;
@property BOOL isForeground;
@property BOOL isBroadcasting;
@property BOOL isSecondInstance;
@property BOOL shared;
@property unsigned long long connection_mode;
@property BOOL usePrivateProtocol;
@property char retryAttempts;
@property (copy) id /* block */ fallbackTask;
@property int fallbackTimeout;
@property (weak, nonatomic) id<WsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPrivateProtocolMode:(unsigned long long)a0;
+ (unsigned long long)convertMessageType_:(int)a0;
+ (unsigned long long)convertConnectionState_:(int)a0;
+ (unsigned long long)convertPPConnectionState_:(int)a0;
+ (BOOL)shouldIgnoreStateCallback_:(unsigned long long)a0 mode:(unsigned long long)a1;
+ (unsigned int)convertTransportType_:(unsigned long long)a0 proxy:(BOOL *)a1;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })addExtraQueryForProxyMode:(id)a0;
+ (void)addExtraHeaderForProxyMode:(id)a0 customParamsMap:(void *)a1;
+ (void)enablePrivateProtocol:(BOOL)a0;
+ (id)anotherSharedManager;
+ (id)sharedManager;

- (id)init:(BOOL)a0 ConnectionMode:(unsigned long long)a1;
- (void)configConnection:(id)a0;
- (void)asyncStartConnection;
- (void)asyncStopConnection;
- (BOOL)asyncSendPushMessage:(id)a0;
- (void)setCustomizedMessageReceiver:(id)a0;
- (void)configWebSocketConnection:(id)a0;
- (void)configPrivateProtocolConnection:(id)a0;
- (void)startConnectionWithPrivateProtocol;
- (void)startConnection:(id)a0 appId:(int)a1 fpid:(int)a2 appKey:(id)a3 deviceId:(long long)a4 appVersion:(int)a5 sdkVersion:(int)a6 installId:(long long)a7 sessionId:(id)a8 webId:(long long)a9 platform:(int)a10 network:(int)a11 customParams:(id)a12;
- (void)startConnection:(id)a0 appId:(int)a1 fpid:(int)a2 appKey:(id)a3 deviceId:(long long)a4 appVersion:(int)a5 sdkVersion:(int)a6 installId:(long long)a7 sessionId:(id)a8 webId:(long long)a9 platform:(int)a10 network:(int)a11;
- (BOOL)asyncSendBinaryMessage:(id)a0;
- (void)setBroadcastingMessage:(BOOL)a0;
- (void)onPushMessageReceived:(const void *)a0 type:(int)a1;
- (void)onPPMessageReceived:(const void *)a0 metaInfo:(const void *)a1 serviceId:(int)a2;
- (void)onFeedbackLog:(id)a0;
- (void)onConnectionErrorWithState:(int)a0 url:(id)a1 error:(id)a2;
- (void)onConnectionStateChanged:(int)a0 url:(id)a1;
- (void)onTrafficChanged:(id)a0 sentBytes:(long long)a1 receivedBytes:(long long)a2 isHeartbeatFrame:(BOOL)a3;
- (void)onPPConnectionErrorWithState:(int)a0 url:(id)a1 error:(id)a2;
- (void)onPPConnectionStateChanged:(int)a0 url:(id)a1 ignore:(BOOL)a2;
- (void)startConnection:(id)a0 appId:(int)a1 deviceId:(long long)a2 appVersion:(int)a3 sdkVersion:(int)a4 installId:(long long)a5 sessionId:(id)a6 webId:(long long)a7 platform:(int)a8 network:(int)a9;
- (BOOL)asyncSendTextMessage:(id)a0;
- (void)asyncSendPing;
- (void)onNetworkStateChanged:(unsigned long long)a0;
- (void)enableDebugLog:(BOOL)a0;
- (BOOL)isServiceReady:(id)a0;
- (BOOL)isAllServiceReady;
- (void)unRegisterService:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id).cxx_construct;
- (void)stopConnection;
- (void)registerService:(id)a0;
- (void)dealloc;

@end
