@class NSString;

@interface LVDraftEffectTemplatePayload : LVDraftPayload {
    struct shared_ptr<CutSame::EffectTemplate> { struct EffectTemplate *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *resourceID;

+ (id)instanceWithCPPModel:(struct shared_ptr<CutSame::EffectTemplate> { struct EffectTemplate *x0; struct __shared_weak_count *x1; })a0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::EffectTemplate> { struct EffectTemplate *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::EffectTemplate> { struct EffectTemplate *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (id)initWithType:(unsigned long long)a0 effectID:(id)a1 resourceID:(id)a2 rootPath:(id)a3 path:(id)a4 name:(id)a5 platformSupport:(unsigned long long)a6;
- (void)setCPPModel:(struct shared_ptr<CutSame::EffectTemplate> { struct EffectTemplate *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)absolutePath;

@end
