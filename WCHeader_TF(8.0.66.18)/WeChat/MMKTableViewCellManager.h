@interface MMKTableViewCellManager : NSObject {
    struct Handle<std::shared_ptr<kinda::KTableViewCellManager>> { struct shared_ptr<kinda::KTableViewCellManager> { struct KTableViewCellManager *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (id)getView;
- (id)getEditActions;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
