@class NSString;

@interface LVEffectTemplateResource : NSObject {
    struct shared_ptr<CutSame::MaterialResource> { struct MaterialResource *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) long long sourcePlatform;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialResource> { struct MaterialResource *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialResource> { struct MaterialResource *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (id)initWithPanel:(id)a0 resourceID:(id)a1 path:(id)a2;
- (id)absolutePathWithRootPath:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialResource> { struct MaterialResource *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
