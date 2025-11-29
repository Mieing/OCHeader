@class IESIMMessageHash, Protocol;

@interface IESIMMessage : NSObject {
    Protocol *p_messageKey;
    IESIMMessageHash *p_hashObserver;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

- (id)getObserverListForMessageKey:(id)a0;
- (void)unregisterMessage:(id)a0;
- (BOOL)registerMessage:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithKey:(id)a0;

@end
