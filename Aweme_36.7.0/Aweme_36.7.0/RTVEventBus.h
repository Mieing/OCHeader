@class __RTVEventQueue, __RTVEventDispatcher;

@interface RTVEventBus : NSObject

@property (retain, nonatomic) __RTVEventDispatcher *dispatcher;
@property (retain, nonatomic) __RTVEventQueue *queue;

- (id)registerWithEventKey:(id)a0 ofExcutor:(id)a1 selector:(SEL)a2 priorty:(long long)a3;
- (id)registerWithEventKey:(id)a0 ofExcutor:(id)a1 selector:(SEL)a2 priorty:(long long)a3 poster:(id)a4;
- (id)registerWithEventKey:(id)a0 ofExcutor:(id)a1 selector:(SEL)a2 priorty:(long long)a3 poster:(id)a4 inQueue:(id)a5;
- (id)registerWithEventKey:(id)a0 eventHander:(id /* block */)a1 priorty:(long long)a2;
- (id)registerWithEventKey:(id)a0 eventHander:(id /* block */)a1 priorty:(long long)a2 poster:(id)a3;
- (id)registerWithEventKey:(id)a0 eventHander:(id /* block */)a1 priorty:(long long)a2 poster:(id)a3 inQueue:(id)a4;
- (void)dispatchEventOnMainThread;
- (id)registerWithEventKey:(id)a0 ofExcutor:(id)a1 selector:(SEL)a2;
- (id)registerWithEventKey:(id)a0 eventHander:(id /* block */)a1;
- (void)postEventOnMainThread:(id)a0;
- (void).cxx_destruct;
- (void)postEvent:(id)a0;
- (id)init;
- (void)dispatchEvent;

@end
