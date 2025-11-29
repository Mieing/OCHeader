@class NSArray, UIVisualEffectView;

@interface SLIBackdropBlurViewElementView : IESECSliceXBaseContainerElementView

@property (retain, nonatomic) NSArray *elementViews;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) double previousBlurRadius;
@property (nonatomic) long long previousBlurEffectStyle;

+ (void)initialize;

- (BOOL)setupElementView;
- (BOOL)setupSubElementViews;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
