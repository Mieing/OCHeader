@class MMFinderGCDAsyncSocket, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, WCLocalSocketServerDelegate;

@interface WCLocalSocketServer : NSObject <GCDAsyncSocketDelegate>

@property (retain, nonatomic) MMFinderGCDAsyncSocket *socket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *sockets;
@property (nonatomic) BOOL serviceSocketSuccess;
@property (weak, nonatomic) id<WCLocalSocketServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startOnPort:(unsigned short)a0;
- (void)stop;
- (void)sendData:(id)a0 socket:(id)a1;
- (BOOL)isServiceSocketSuccess;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)socketDidCloseReadStream:(id)a0;
- (void)socket:(id)a0 didAcceptNewSocket:(id)a1;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)readDataToData:(id)a0;
- (void)readDataToLength:(unsigned long long)a0 withTimeout:(double)a1 sock:(id)a2;
- (void)readDataWithTimeout:(double)a0 sock:(id)a1;
- (void).cxx_destruct;

@end
