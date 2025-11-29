@class NSString;

@interface LVDraftPlaceholderPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialPlaceholder> { struct MaterialPlaceholder *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *name;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialPlaceholder> { struct MaterialPlaceholder *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialPlaceholder> { struct MaterialPlaceholder *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialPlaceholder> { struct MaterialPlaceholder *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 name:(id)a1;

@end
