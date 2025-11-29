@interface ZidlObjHolder : NSObject

@property (nonatomic) struct shared_ptr<zidl::ObjHolder> { struct ObjHolder *__ptr_; struct __shared_weak_count *__cntrl_; } cppHolderImpl;

+ (id)createWithCpp:(const void *)a0;

- (id)init:(const void *)a0;
- (id)init;
- (id)init:(const void *)a0 identity:(const void *)a1;
- (void)copyTo:(id)a0;
- (id)zidlHolderToObj:(Class)a0;
- (void)holdZidlObj:(const void *)a0 identity:(const void *)a1;
- (struct shared_ptr<zidl::ObjHolder> { struct ObjHolder *x0; struct __shared_weak_count *x1; })getObjHolderCpp;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
