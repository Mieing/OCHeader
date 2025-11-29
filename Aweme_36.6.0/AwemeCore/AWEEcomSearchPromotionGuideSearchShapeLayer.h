@interface AWEEcomSearchPromotionGuideSearchShapeLayer : CAShapeLayer

- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })calculatePointsWithCurveMidX:(double)a0 width:(double)a1 margin:(double)a2 ControlPointXPercentage1:(double)a3 ControlPointXPercentage2:(double)a4 controlPointYPercentage1:(double)a5 controlPointYPercentage2:(double)a6 slashPointXPercentage:(double)a7 slashPointYPercentage:(double)a8;
- (struct CGPath { } *)updatePathWithTabNum:(long long)a0 currentTabNum:(long long)a1 width:(double)a2 height:(double)a3 radius:(double)a4 margin:(double)a5 borderWidth:(double)a6;
- (id)init;

@end
