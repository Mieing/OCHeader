@interface ZidlObjHolder2 : NSObject

@property (nonatomic) struct shared_ptr<zidl::ObjHolder2> { struct ObjHolder2 *__ptr_; struct __shared_weak_count *__cntrl_; } cppHolderImpl;

+ (id)createWithCpp:(const void *)a0;

- (id)init:(const void *)a0;
- (id)init;
- (id)init:(const void *)a0 identity:(const void *)a1 refCntManager:(void *)a2;
- (id)zidlHolderToObj:(Class)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
