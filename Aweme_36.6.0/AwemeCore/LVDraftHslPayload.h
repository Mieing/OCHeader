@class NSString;

@interface LVDraftHslPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialHsl> { struct MaterialHsl *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) long long hslColorType;
@property (nonatomic) long long hue;
@property (nonatomic) BOOL interacting;
@property (nonatomic) long long lightness;
@property (nonatomic) long long saturation;
@property (copy, nonatomic) NSString *version;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialHsl> { struct MaterialHsl *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialHsl> { struct MaterialHsl *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialHsl> { struct MaterialHsl *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
