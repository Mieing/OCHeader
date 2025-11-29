@class NSString, LVGraph, LVPoint;

@interface LVTextKeyframe : LVKeyframe {
    struct shared_ptr<CutSame::TextKeyframe> { struct TextKeyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double backgroundAlpha;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) LVGraph *graph;
@property (retain, nonatomic) LVPoint *position;
@property (nonatomic) double rotation;
@property (retain, nonatomic) LVPoint *scale;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowAngle;
@property (copy, nonatomic) NSString *shadowColor;
@property (retain, nonatomic) LVPoint *shadowPoint;
@property (nonatomic) double shadowSmoothing;
@property (nonatomic) double textAlpha;
@property (copy, nonatomic) NSString *textColor;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::TextKeyframe> { struct TextKeyframe *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::TextKeyframe> { struct TextKeyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::TextKeyframe> { struct TextKeyframe *x0; struct __shared_weak_count *x1; })a0;
- (void)applyPropertiesToSegment:(id)a0;
- (void)adjustKeyframePropertiesIfNeeded;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
