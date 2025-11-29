@class NSString;

@interface LVDraftAudioEffectPayload : LVDraftPayload <LVCopying> {
    struct shared_ptr<CutSame::MaterialAudioEffect> { struct MaterialAudioEffect *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long effectType;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *resourceID;

+ (unsigned long long)effectTypeFromName:(id)a0;
+ (id)nameFromType:(unsigned long long)a0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAudioEffect> { struct MaterialAudioEffect *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialAudioEffect> { struct MaterialAudioEffect *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAudioEffect> { struct MaterialAudioEffect *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEffectType:(unsigned long long)a0;

@end
