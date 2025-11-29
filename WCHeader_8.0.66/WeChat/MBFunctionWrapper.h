@interface MBFunctionWrapper : NSObject {
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _func;
    struct weak_ptr<mmuv::UVAsyncCall> { struct UVAsyncCall *__ptr_; struct __shared_weak_count *__cntrl_; } _js_call;
}

- (id)initWithFunc:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0 jsCall:(struct shared_ptr<mmuv::UVAsyncCall> { struct UVAsyncCall *x0; struct __shared_weak_count *x1; })a1;
- (void)run;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
