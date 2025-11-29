@class UIView;

@interface TTAdSplashHittestHotspot : NSObject

@property (weak, nonatomic) UIView *target;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } extraHotspotInsets;

- (id)initWithTarget:(id)a0 extraHotspotInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;

@end
