@interface GUIAdapterThreadLooper : NSObject {
    void *_looper;
}

- (void)detachLooper;
- (void)postMessage:(void *)a0 afterDelay:(unsigned long long)a1;
- (id)initWithLooper:(void *)a0;
- (void)dealloc;

@end
