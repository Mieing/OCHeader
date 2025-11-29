@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPUDPSocketManager : NSObject <GCDAsyncUdpSocketDelegate>

@property (retain, nonatomic) NSMutableDictionary *socketMap;
@property (retain, nonatomic) NSMutableDictionary *bdpTaskMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) unsigned long long nextSocketId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)destroySocketsWithIDs:(id)a0;
+ (id)createUDPSocketWithTask:(id)a0;
+ (unsigned long long)bindWithSocketId:(id)a0 port:(unsigned long long)a1;
+ (void)connectWithSocketId:(id)a0 address:(id)a1 port:(unsigned long long)a2;
+ (void)sendWithSocketId:(id)a0 address:(id)a1 port:(unsigned long long)a2 data:(id)a3 offset:(unsigned long long)a4 length:(unsigned long long)a5 setBroadcast:(BOOL)a6;
+ (void)closeWithSocketId:(id)a0;
+ (id)socketWithId:(id)a0;
+ (id)sharedInstance;

- (void)udpSocket:(id)a0 didConnectToAddress:(id)a1;
- (void)udpSocket:(id)a0 didNotConnect:(id)a1;
- (void)udpSocket:(id)a0 didSendDataWithTag:(long long)a1;
- (void)udpSocket:(id)a0 didNotSendDataWithTag:(long long)a1 dueToError:(id)a2;
- (void)udpSocket:(id)a0 didReceiveData:(id)a1 fromAddress:(id)a2 withFilterContext:(id)a3;
- (void)udpSocketDidClose:(id)a0 withError:(id)a1;
- (id)getSocketIdWithSocket:(id)a0;
- (void)handelError:(id)a0 socket:(id)a1;
- (void)subscribeMessageWithSocket:(id)a0 param:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
