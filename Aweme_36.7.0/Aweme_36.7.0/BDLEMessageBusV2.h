@class BDLEMessageDispatcher, BDLEMessageCodec, BDLEMessagePipe, NSNumber;
@protocol BDLEMessageBusDelegate, BDLEMessageBusEventDataSource;

@interface BDLEMessageBusV2 : NSObject

@property (retain, nonatomic) BDLEMessagePipe *messagePipe;
@property (retain, nonatomic) BDLEMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) BDLEMessageCodec *messageCodec;
@property (retain, nonatomic) NSNumber *remoteBitmap;
@property (weak, nonatomic) id<BDLEMessageBusDelegate> delegate;
@property (weak, nonatomic) id<BDLEMessageBusEventDataSource> eventDataSource;

- (id)initWithContextId:(id)a0;
- (BOOL)connect:(id)a0 port:(int)a1 error:(id *)a2;
- (void)sendMessageRequest:(id)a0 type:(long long)a1 ipAddress:(id)a2 port:(int)a3 completion:(id /* block */)a4;
- (void)reconnect:(id)a0 port:(int)a1 error:(id *)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)disconnect;
- (void)dealloc;
- (id)localPublicKey;
- (void)setRemotePublicKey:(id)a0;

@end
