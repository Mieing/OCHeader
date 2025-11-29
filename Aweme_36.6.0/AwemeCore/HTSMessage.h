@class HTSMessageHash, Protocol;

@interface HTSMessage : NSObject {
    Protocol *p_messageKey;
    HTSMessageHash *p_hashObserver;
    HTSMessageHash *p_hashKeyObserver;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

- (id)getObserverListForMessageKey:(id)a0;
- (id)getKeyMessageList:(id)a0;
- (void)unregisterMessage:(id)a0;
- (void)unregisterMessage:(id)a0 forKey:(id)a1;
- (BOOL)registerMessage:(id)a0;
- (BOOL)registerMessage:(id)a0 forKey:(id)a1;
- (void)unregisterKeyMessage:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithKey:(id)a0;

@end
