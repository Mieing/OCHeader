@interface MMKProfessionEditViewOnSelectProfessionCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KProfessionEditViewOnSelectProfessionCallback>> { struct shared_ptr<kinda::KProfessionEditViewOnSelectProfessionCallback> { struct KProfessionEditViewOnSelectProfessionCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onSelectProfession:(id)a0 professionType:(int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
