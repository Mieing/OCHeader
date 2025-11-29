@class _LVAnimationPackage, NSString;

@interface LVAnimationInfo : LVDraftPayload <LVCopying> {
    struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVAnimationPackage *package;
@property (copy, nonatomic) NSString *animationID;
@property (copy, nonatomic) NSString *animationType;
@property (nonatomic) unsigned long long platformSupport;
@property (copy, nonatomic) NSString *resourceMD5;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *animationName;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSString *resourceID;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
