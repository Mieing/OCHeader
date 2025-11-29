@interface RelaxFramework.RelaxEventEmitter : NSObject {
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ counter;
}

- (long long)addListenerWithEventName:(id)a0 listener:(id /* block */)a1;
- (void)removeListenerWithEventName:(id)a0 listenerId:(long long)a1;
- (void)removeAllListenersWithEventName:(id)a0;
- (void)triggerWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
