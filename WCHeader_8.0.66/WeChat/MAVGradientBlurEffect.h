@interface MAVGradientBlurEffect : MAVVLogEffect

@property (nonatomic) float radius;
@property (nonatomic) BOOL centerCropBlur;
@property (nonatomic) float blurMaskRatio;
@property (nonatomic) BOOL blurTop;
@property (nonatomic) BOOL blurBottom;
@property (nonatomic) float contentOffset;
@property (nonatomic) float contentOffsetPercent;

- (id)init;
- (long long)type;

@end
