@class NSString, NSArray, _LVDraftVideoEffectPayloadPackage, LVTimerange;

@interface LVDraftVideoEffectPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialVideoEffect> { struct MaterialVideoEffect *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVDraftVideoEffectPayloadPackage *package;
@property (copy, nonatomic) NSString *resourceMD5;
@property (nonatomic) unsigned long long applyType;
@property (copy, nonatomic) NSArray *adjustParams;
@property (nonatomic) long long applyTargetType;
@property (retain, nonatomic) LVTimerange *applyTimeRange;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) long long renderIndex;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) long long sourcePlatform;
@property (retain, nonatomic) LVTimerange *timeRange;
@property (nonatomic) float value;
@property (copy, nonatomic) NSString *version;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialVideoEffect> { struct MaterialVideoEffect *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialVideoEffect> { struct MaterialVideoEffect *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialVideoEffect> { struct MaterialVideoEffect *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)absolutePath;

@end
