@class BDLEMessageBusV2, BDLEMessageCodec, BDLEMessagePipe, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore, BDLEMessageBusEventDataSource, OS_dispatch_source, OS_dispatch_queue, BDLEMessageBusDelegate;

@interface BDLEMessageDispatcher : NSObject <BDLEMessagePipeDelegate> {
    long long _reconnectThreshold;
    long long _heartbeatThreshold;
    long long _messageQueueIntervalMs;
    long long _capacityCheckIntervalMs;
    BOOL _enableMessageDetailLog;
    BOOL _disablePushMessageAck;
}

@property (weak, nonatomic) id<BDLEMessageBusDelegate> busDelegate;
@property (weak, nonatomic) id<BDLEMessageBusEventDataSource> eventDataSource;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isReconnecting;
@property (nonatomic) BOOL isSuspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingCheckerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pendingCheckerTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *runningCheckerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *runningCheckerTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingQueueSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *runningQueueSemaphore;
@property (retain, nonatomic) NSMutableArray *pendingRequestQueue;
@property (retain, nonatomic) NSMutableArray *pendingLowPriRequestQueue;
@property (retain, nonatomic) NSMutableArray *runningRequestQueue;
@property (retain, nonatomic) NSMutableArray *retryRequestQueue;
@property (weak, nonatomic) BDLEMessagePipe *pipe;
@property (weak, nonatomic) BDLEMessageCodec *codec;
@property (weak, nonatomic) BDLEMessageBusV2 *bus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)handleParseMessage:(id)a0 data:(id)a1;
- (void)handlePacketSticking:(id)a0 data:(id)a1 tag:(long long)a2;
- (void)handleRequestMessage:(id)a0 cmd:(id)a1 jsonDict:(id)a2;
- (void)handleResponseMessage:(id)a0 cmd:(id)a1 jsonDict:(id)a2;
- (void)messagePipe:(id)a0 socket:(id)a1 didDisconnect:(id)a2;
- (void)messagePipe:(id)a0 socket:(id)a1 didWriteDataWithTag:(long long)a2;
- (void)messagePipe:(id)a0 socket:(id)a1 didReadData:(id)a2 withTag:(long long)a3;
- (void)checkRunningQueueCapacity;
- (void)sendRequest:(id)a0 viaSocket:(id)a1;
- (void)startWithPipe:(id)a0;
- (void)scheduleReconnect:(id)a0 port:(int)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)enqueueRequest:(id)a0;
- (void)dealloc;
- (void)dispatchRequest:(id)a0;
- (void)dequeueRequest;

@end
