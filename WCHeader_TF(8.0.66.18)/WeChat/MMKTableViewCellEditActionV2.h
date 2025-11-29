@interface MMKTableViewCellEditActionV2 : NSObject {
    struct Handle<std::shared_ptr<kinda::KTableViewCellEditActionV2>> { struct shared_ptr<kinda::KTableViewCellEditActionV2> { struct KTableViewCellEditActionV2 *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (BOOL)getIsDestructive;
- (id)getTitle;
- (void)triggered;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
