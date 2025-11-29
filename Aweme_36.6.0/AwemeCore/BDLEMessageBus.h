@class NSNumber, NSMutableDictionary, NSString, NSData, NSLock, NSMutableArray;
@protocol BDLEMessageBusDelegate, BDLEMessageBusEventDataSource;

@interface BDLEMessageBus : NSObject <GCDAsyncSocketDelegate> {
    long long _socketWriteTag;
    long long _socketReadTag;
}

@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (retain, nonatomic) NSLock *requestQueueLock;
@property (retain, nonatomic) NSMutableArray *requestCacheQueue;
@property (retain, nonatomic) NSLock *requestCacheLock;
@property (retain, nonatomic) NSLock *readDataLock;
@property (retain, nonatomic) NSMutableArray *shortConnectionPool;
@property (retain, nonatomic) NSLock *shortConnectionPoolLock;
@property (retain, nonatomic) NSMutableDictionary *longConnectionDict;
@property (copy, nonatomic) NSString *latestConnectId;
@property (retain, nonatomic) NSMutableDictionary *unhandledDataDict;
@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) int port;
@property (copy, nonatomic) NSData *localPriKeyData;
@property (copy, nonatomic) NSData *localPubKeyData;
@property (copy, nonatomic) NSData *remotePubKeyData;
@property (copy, nonatomic) NSData *sharedKeyData;
@property (nonatomic) long long encryptConfig;
@property (retain, nonatomic) NSNumber *remoteBitmap;
@property (weak, nonatomic) id<BDLEMessageBusDelegate> delegate;
@property (weak, nonatomic) id<BDLEMessageBusEventDataSource> eventDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (BOOL)connect:(id)a0 port:(int)a1 error:(id *)a2;
- (void)sendMessageRequest:(id)a0 type:(long long)a1 ipAddress:(id)a2 port:(int)a3 completion:(id /* block */)a4;
- (void)reconnect:(id)a0 port:(int)a1 error:(id *)a2 completion:(id /* block */)a3;
- (id)deviceCacheKey:(id)a0 port:(int)a1;
- (void)doSendSocketMessageInternal:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)handleParseMessage:(id)a0 data:(id)a1;
- (void)handlePacketSticking:(id)a0 data:(id)a1 tag:(long long)a2;
- (void)handleRequestMessage:(id)a0 cmd:(id)a1 jsonDict:(id)a2;
- (void)handleResponseMessage:(id)a0 cmd:(id)a1 jsonDict:(id)a2;
- (id)requestQueueCmds;
- (void).cxx_destruct;
- (void)disconnect;
- (void)dealloc;
- (id)localPublicKey;
- (void)setRemotePublicKey:(id)a0;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socket:(id)a0 didWriteDataWithTag:(long long)a1;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;

@end
