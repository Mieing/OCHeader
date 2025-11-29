@class LVGraph, LVVideoMaskConfig, LVPoint;

@interface LVVideoKeyframe : LVKeyframe {
    struct shared_ptr<CutSame::VideoKeyframe> { struct VideoKeyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double alpha;
@property (nonatomic) float brightnessValue;
@property (nonatomic) double chromaIntensity;
@property (nonatomic) double chromaShadow;
@property (nonatomic) float contrastValue;
@property (nonatomic) float fadeValue;
@property (nonatomic) float filterValue;
@property (retain, nonatomic) LVGraph *graph;
@property (nonatomic) float highlightValue;
@property (nonatomic) double lastVolume;
@property (nonatomic) float lightSensationValue;
@property (nonatomic) double lutValue;
@property (retain, nonatomic) LVVideoMaskConfig *maskConfig;
@property (nonatomic) float particleValue;
@property (retain, nonatomic) LVPoint *position;
@property (nonatomic) double rotation;
@property (nonatomic) float saturationValue;
@property (retain, nonatomic) LVPoint *scale;
@property (nonatomic) float shadowValue;
@property (nonatomic) float sharpenValue;
@property (nonatomic) float temperatureValue;
@property (nonatomic) float toneValue;
@property (nonatomic) float vignettingValue;
@property (nonatomic) double volume;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::VideoKeyframe> { struct VideoKeyframe *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::VideoKeyframe> { struct VideoKeyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::VideoKeyframe> { struct VideoKeyframe *x0; struct __shared_weak_count *x1; })a0;
- (void)applyPropertiesToSegment:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
