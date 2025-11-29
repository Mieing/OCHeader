@class NSRecursiveLock;

@interface BDPSTLQueue : NSObject {
    void *_queue;
    NSRecursiveLock *_lock;
}

- (void)enqueue:(id)a0;
- (BOOL)empty;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)dequeue;
- (void)dealloc;
- (unsigned long long)count;

@end
