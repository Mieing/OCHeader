@interface MMKTableViewCellEditAction : NSObject {
    struct Handle<std::shared_ptr<kinda::KTableViewCellEditAction>> { struct shared_ptr<kinda::KTableViewCellEditAction> { struct KTableViewCellEditAction *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (BOOL)getIsDestructive;
- (id)getTitle;
- (void)triggered;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
