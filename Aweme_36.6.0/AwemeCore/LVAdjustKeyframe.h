@interface LVAdjustKeyframe : LVKeyframe {
    struct shared_ptr<CutSame::AdjustKeyframe> { struct AdjustKeyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) float brightnessValue;
@property (nonatomic) float contrastValue;
@property (nonatomic) float fadeValue;
@property (nonatomic) float highlightValue;
@property (nonatomic) float lightSensationValue;
@property (nonatomic) double lutValue;
@property (nonatomic) float particleValue;
@property (nonatomic) float saturationValue;
@property (nonatomic) float shadowValue;
@property (nonatomic) float sharpenValue;
@property (nonatomic) float temperatureValue;
@property (nonatomic) float toneValue;
@property (nonatomic) float vignettingValue;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::AdjustKeyframe> { struct AdjustKeyframe *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::AdjustKeyframe> { struct AdjustKeyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::AdjustKeyframe> { struct AdjustKeyframe *x0; struct __shared_weak_count *x1; })a0;
- (void)applyPropertiesToSegment:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
