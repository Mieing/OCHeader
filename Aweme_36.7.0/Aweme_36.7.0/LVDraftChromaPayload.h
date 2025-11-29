@class NSString;

@interface LVDraftChromaPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *color;
@property (nonatomic) double intensityValue;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double shadowValue;

+ (id)defaultPayload;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
