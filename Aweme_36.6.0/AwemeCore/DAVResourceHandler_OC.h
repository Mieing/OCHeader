@interface DAVResourceHandler_OC : NSObject {
    struct shared_ptr<davinci::resource::DAVResourceHandler> { struct DAVResourceHandler *__ptr_; struct __shared_weak_count *__cntrl_; } _internalHandler;
}

@property (nonatomic) struct shared_ptr<davinci::resource::DAVResourceHandler> { struct DAVResourceHandler *x0; struct __shared_weak_count *x1; } internalHandler;

- (BOOL)canHandleWithResource:(id)a0;
- (void)fetchWithResource:(id)a0 extraParams:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)getResourceFromCacheWithResourceId:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)initWithHandler:(struct shared_ptr<davinci::resource::DAVResourceHandler> { struct DAVResourceHandler *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;

@end
