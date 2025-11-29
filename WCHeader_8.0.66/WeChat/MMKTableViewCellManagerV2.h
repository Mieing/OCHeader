@interface MMKTableViewCellManagerV2 : NSObject {
    struct Handle<std::shared_ptr<kinda::KTableViewCellManagerV2>> { struct shared_ptr<kinda::KTableViewCellManagerV2> { struct KTableViewCellManagerV2 *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (id)getView;
- (id)getEditActions;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
