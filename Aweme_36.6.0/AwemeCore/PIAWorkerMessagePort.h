@class PIAWorker, PIASTLQueue;

@interface PIAWorkerMessagePort : NSObject <PIAMessageChannelPort>

@property (retain, nonatomic) PIASTLQueue *bridgeMessageList;
@property (weak, nonatomic) PIAWorker *worker;

- (void)onMessage:(id)a0;
- (void)onReceivedMessage:(id)a0;
- (void)terminateWorkerWithResult:(id)a0;
- (id)getWorkerBridgeMessage;
- (id)initWithWorker:(id)a0;
- (void).cxx_destruct;
- (void)postMessage:(id)a0;

@end
