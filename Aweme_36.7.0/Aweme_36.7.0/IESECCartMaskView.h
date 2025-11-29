@class NSDictionary;

@interface IESECCartMaskView : UIView

@property (nonatomic) double initTime;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (void)dismissBottomMask;
+ (id)showBottomMaskWithExtraParams:(id)a0 onView:(id)a1;

- (void)trackMaskViewTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
