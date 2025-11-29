@class UIVisualEffectView;

@interface PlatformViewFilter : NSObject

@property (nonatomic) BOOL backdropFilterViewConfigured;
@property (retain, nonatomic) UIVisualEffectView *backdropFilterView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double blurRadius;

+ (void)resetPreparation;
+ (void)prepareOnce:(id)a0;
+ (BOOL)isUIVisualEffectViewImplementationValid;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurRadius:(double)a1 visualEffectView:(id)a2;
- (void)updateVisualEffectView:(id)a0;
- (void).cxx_destruct;

@end
