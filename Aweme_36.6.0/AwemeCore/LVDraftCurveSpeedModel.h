@class NSString, NSArray, _LVDraftCurveSpeedModelPackage;

@interface LVDraftCurveSpeedModel : NSObject {
    struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVDraftCurveSpeedModelPackage *package;
@property (nonatomic) double avgRatioSpeed;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *speedPoints;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
