@class AWEPlayInteractionElementMask;

@interface AWEPlayInteractionElementMaskView : UIView

@property (retain, nonatomic) AWEPlayInteractionElementMask *topMaskView;
@property (retain, nonatomic) AWEPlayInteractionElementMask *centerMaskView;
@property (retain, nonatomic) AWEPlayInteractionElementMask *bottomMaskView;

+ (id)elementMaskView;

- (void)layoutSubviews;
- (void)setUpElementMaskViewGradientWhite;
- (void)setUpElementMaskViewGradientTexture;
- (void)setUpGradientWithType:(unsigned long long)a0;
- (void)setUp;
- (void).cxx_destruct;

@end
