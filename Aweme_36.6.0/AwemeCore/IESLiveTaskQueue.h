@class __end_, __cap_, __begin_;

@interface IESLiveTaskQueue : NSObject {
    struct deque<void (^)(), std::allocator<void (^)()>> { struct __split_buffer<void (^__strong *)(), std::allocator<void (^__strong *)()>> { id /* block */ **__first_; id /* block */ **__begin_; id /* block */ **__end_; id /* block */ **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } _deque;
    struct deque<NSString *, std::allocator<NSString *>> { struct __split_buffer<NSString *__strong *, std::allocator<NSString *__strong *>> { __begin_ ***__first_; __end_ ***x0; __cap_ ***x1; id **x2; } __map_; unsigned long long __start_; unsigned long long __size_; } _dequeID;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)addTask:(id /* block */)a0 taskID:(id)a1;
- (void)addTask:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)clearTasks;
- (id)runTask;

@end
