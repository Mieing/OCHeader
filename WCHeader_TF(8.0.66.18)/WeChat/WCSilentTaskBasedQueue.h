@class NSRecursiveLock;

@interface WCSilentTaskBasedQueue : WCSilentTask {
    struct queue<void (^)(), std::deque<void (^)()>> { struct deque<void (^)(), std::allocator<void (^)()>> { struct __split_buffer<void (^__strong *)(), std::allocator<void (^__strong *)()>> { id /* block */ **__first_; id /* block */ **__begin_; id /* block */ **__end_; struct __compressed_pair<void (^__strong **)(), std::allocator<void (^__strong *)()>> { id /* block */ **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<void (^)()>> { unsigned long long __value_; } __size_; } c; } _queue;
}

@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)initWithName:(id)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchRecursively:(id /* block */)a0;
- (void)runLoop;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
