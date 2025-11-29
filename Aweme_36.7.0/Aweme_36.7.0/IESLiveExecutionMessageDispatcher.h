@class IESLiveExecutionSequenceQueue, NSMutableDictionary;

@interface IESLiveExecutionMessageDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlerMap;
@property (retain, nonatomic) NSMutableDictionary *blockHandlerMap;
@property (weak, nonatomic) IESLiveExecutionSequenceQueue *sequenceQueue;

- (void)registerHandlerBlock:(id /* block */)a0 forMessageType:(id)a1;
- (void)dispatchMessageSynchronously:(id)a0;
- (void)registerHandler:(id)a0 forMessageTypes:(id)a1;
- (void)dispatchMessage:(id)a0 toHandlers:(id)a1 needSynchronously:(BOOL)a2;
- (void)registerHandler:(id)a0 forMessageType:(id)a1;
- (void)unregisterHandlerWithToken:(id)a0;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)unregisterHandler:(id)a0;

@end
