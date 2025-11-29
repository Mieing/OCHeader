@class NSString, _LVDraftEffectPayloadPackage, NSArray;

@interface LVDraftEffectPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialEffect> { struct MaterialEffect *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVDraftEffectPayloadPackage *package;
@property (copy, nonatomic) NSString *resourceMD5;
@property (nonatomic) unsigned long long applyType;
@property (copy, nonatomic) NSArray *adjustParams;
@property (nonatomic) long long applyTargetType;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) BOOL enableSkinToneCorrection;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) long long sourcePlatform;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) float value;
@property (copy, nonatomic) NSString *version;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialEffect> { struct MaterialEffect *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialEffect> { struct MaterialEffect *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)copyCategoryToNewObject:(id)a0;
- (id)initWithType:(unsigned long long)a0 effectID:(id)a1 resourceID:(id)a2 rootPath:(id)a3 path:(id)a4 name:(id)a5 platformSupport:(unsigned long long)a6 resourceMD5:(id)a7;
- (id)initWithType:(unsigned long long)a0 effectID:(id)a1 resourceID:(id)a2 rootPath:(id)a3 path:(id)a4 name:(id)a5 platformSupport:(unsigned long long)a6;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialEffect> { struct MaterialEffect *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)absolutePath;

@end
