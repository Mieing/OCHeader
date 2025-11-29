@class NSMutableDictionary, NSString, NSObject, GCDAsyncSocket;
@protocol OS_dispatch_queue, BDLEMessagePipeDelegate;

@interface BDLEMessagePipe : NSObject <GCDAsyncSocketDelegate>

@property (weak, nonatomic) id<BDLEMessagePipeDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;
@property (retain, nonatomic) NSMutableDictionary *shortSocketPool;
@property (retain, nonatomic) GCDAsyncSocket *thisLongSocket;
@property (retain, nonatomic) GCDAsyncSocket *reconnectingSocket;
@property (retain, nonatomic) NSMutableDictionary *shortConnectionCallbackMap;
@property (retain, nonatomic) NSMutableDictionary *longConnectionCallbackMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (id)getAvailableLongSocket:(id)a0 port:(int)a1;
- (void)getAvailableShortSocket:(id)a0 port:(int)a1 completion:(id /* block */)a2;
- (BOOL)connect:(id)a0 port:(int)a1 errPtr:(id *)a2 completion:(id /* block */)a3;
- (void)reconnect:(id)a0 port:(int)a1 errPtr:(id *)a2 completion:(id /* block */)a3;
- (void)getSocket:(id)a0 port:(int)a1 completion:(id /* block */)a2;
- (void)removeSocket:(id)a0;
- (void).cxx_destruct;
- (void)disconnect;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socket:(id)a0 didWriteDataWithTag:(long long)a1;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;

@end
