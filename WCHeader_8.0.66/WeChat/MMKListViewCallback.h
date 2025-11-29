@interface MMKListViewCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KListViewCallback>> { struct shared_ptr<kinda::KListViewCallback> { struct KListViewCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (int)getCount;
- (int)getViewType:(int)a0;
- (int)getViewTypeCount;
- (id)fillData:(int)a0 contentView:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
