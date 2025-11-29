@class NSString, WAWebSocketTaskDelayReleaseWrap, NSObject, SRWebSocket;
@protocol OS_dispatch_source, WAWebSocketTaskDelegate, OS_dispatch_queue;

@interface WAWebSocketTask : NSObject <SRWebSocketDelegate> {
    NSString *_appID;
    NSString *_taskID;
    BOOL _isCompatibleSingleConnection;
    NSObject<OS_dispatch_queue> *_workerQueue;
    SRWebSocket *_websocket;
    BOOL _hasCalledCloseTask;
    unsigned int _appType;
}

@property (weak, nonatomic) WAWebSocketTaskDelayReleaseWrap *weakDelayReleaseWrap;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayReleaseTimer;
@property (copy, nonatomic) id /* block */ openHandler;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (weak, nonatomic) id<WAWebSocketTaskDelegate> delegate;
@property (nonatomic) unsigned int workerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 taskID:(id)a1 compatibleSingleConnection:(BOOL)a2 workerQueue:(id)a3;
- (void)dealloc;
- (id)getTaskID;
- (BOOL)isCompatibleSingleConnection;
- (BOOL)isAvailable;
- (void)setHandler:(id /* block */)a0 messageHandler:(id /* block */)a1 closeHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)openWithUrl:(id)a0 config:(id)a1 httpHeaders:(id)a2 subProtocols:(id)a3 context:(id)a4 openHandler:(id /* block */)a5 closeHandler:(id /* block */)a6 errorHandler:(id /* block */)a7 messageHandler:(id /* block */)a8;
- (void)anyThread_didSendoutRequest:(id)a0;
- (void)close;
- (void)closeAndReleaseImmediately;
- (void)closeWithReason:(id)a0;
- (void)closeWithCode:(long long)a0 reason:(id)a1;
- (BOOL)sendString:(id)a0 getError:(id *)a1;
- (BOOL)sendData:(id)a0 getError:(id *)a1;
- (id)certificateArrayFromDataList:(id)a0;
- (void)closeWithCode:(long long)a0 reason:(id)a1 releaseImmediately:(BOOL)a2;
- (void)closeTaskWithReleaseImmediately:(BOOL)a0;
- (void)scheduleDelayReleaseTimer;
- (void)invalidateDelayReleaseTimer;
- (void)onDelayReleaseTimeout;
- (void)removeDelayReleaseWrap;
- (void)callbackEndTask;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didReceiveMessageWithString:(id)a1;
- (void)webSocket:(id)a0 didReceiveMessageWithData:(id)a1;
- (void).cxx_destruct;

@end
