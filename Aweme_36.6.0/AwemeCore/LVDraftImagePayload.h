@class NSString;

@interface LVDraftImagePayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialImage> { struct MaterialImage *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) long long checkFlag;
@property (nonatomic) long long height;
@property (nonatomic) double initialScale;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long width;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })defaultDuration;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialImage> { struct MaterialImage *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialImage> { struct MaterialImage *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)convertImageIfNeededWithRootPath:(id)a0;
- (id)copyToNewObject;
- (id)initWithType:(unsigned long long)a0 payloadID:(id)a1;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialImage> { struct MaterialImage *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
