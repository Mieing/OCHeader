@class TIMXMessageHash, Protocol;

@interface TIMXMessage : NSObject {
    Protocol *_messageKey;
    TIMXMessageHash *p_hashObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } p_lock;
}

- (id)getObserverListForMessageKey:(id)a0;
- (void)unregisterMessage:(id)a0;
- (BOOL)registerMessage:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)a0;

@end
