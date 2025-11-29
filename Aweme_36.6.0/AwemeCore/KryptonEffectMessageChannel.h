@interface KryptonEffectMessageChannel : NSObject {
    void *manager;
    void *callback;
}

- (id)init;
- (void)destroy;
- (BOOL)removeCallback;
- (BOOL)addCallback:(void *)a0;
- (void)dealloc;

@end
