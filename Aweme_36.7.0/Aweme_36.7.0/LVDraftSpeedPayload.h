@class LVDraftCurveSpeedModel;

@interface LVDraftSpeedPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialSpeed> { struct MaterialSpeed *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) LVDraftCurveSpeedModel *curveSpeed;
@property (nonatomic) long long modePrivate;
@property (nonatomic) double speed;

+ (id)defaultPayload;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialSpeed> { struct MaterialSpeed *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnotherWithID:(id)a0;
- (struct shared_ptr<CutSame::MaterialSpeed> { struct MaterialSpeed *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (id)initWithType:(unsigned long long)a0 payloadID:(id)a1;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialSpeed> { struct MaterialSpeed *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
