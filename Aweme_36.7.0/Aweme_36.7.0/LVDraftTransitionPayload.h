@class NSString;

@interface LVDraftTransitionPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialTransition> { struct MaterialTransition *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (readonly, nonatomic) unsigned long long transitionType;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } overlapDuration;
@property (copy, nonatomic) NSString *recourceMD5;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long durationMilliSeconds;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) BOOL isOverlap;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSString *resourceID;

+ (id)noneTransitionPayload;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })transitionApplyDuraion;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })transitionRequireMinDuration;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialTransition> { struct MaterialTransition *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithTransitionType:(unsigned long long)a0;
- (struct shared_ptr<CutSame::MaterialTransition> { struct MaterialTransition *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialTransition> { struct MaterialTransition *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithEffectID:(id)a0 effectName:(id)a1 rootPath:(id)a2 path:(id)a3 isOverlap:(BOOL)a4;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
