@class AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel, CAShapeLayer;

@interface BDPCDDynamicCardCouponViewBorderView : UIImageView

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel *model;

- (void)updateViewWithModel:(id)a0 borderType:(unsigned long long)a1 couponCenterRadius:(double)a2;
- (void)addDifferentCornerRadiusForLeftTop:(double)a0 leftBottom:(double)a1 rightTop:(double)a2 rightBottom:(double)a3 contianerBorderColor:(id)a4 contianerBorderWidth:(double)a5 isDash:(BOOL)a6 borderType:(unsigned long long)a7 couponCenterRadius:(double)a8;
- (void)addBorderToImageView:(id)a0 borderType:(unsigned long long)a1 couponCenterRadius:(double)a2;
- (void).cxx_destruct;

@end
