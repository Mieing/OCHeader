@class NSValue, NSString;

@interface GXPropAnimationModel : GXAnimationBaseModel

@property (nonatomic) double delay;
@property (nonatomic) long long loopCount;
@property (nonatomic) double duration;
@property (nonatomic) BOOL autoReverse;
@property (retain, nonatomic) NSValue *valueFrom;
@property (retain, nonatomic) NSValue *valueTo;
@property (retain, nonatomic) NSString *propName;
@property (nonatomic) long long curveType;

- (void)setupAnimationInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
