@class CAGradientLayer, CAShapeLayer, UIView, CALayer;

@interface IESECMarqueeView : LynxUI

@property (retain, nonatomic) UIView *marqueeView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *rectMask;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) long long alphaDuration;
@property (nonatomic) long long marqueeDuration;
@property (nonatomic) double marqueeRotateCount;
@property (nonatomic) BOOL isPlaying;
@property (copy, nonatomic) id /* block */ completeBlock;

+ (void)registerMarqueeView;
+ (id)__lynx_ui_method_config__600;

- (BOOL)animationIsPlaying;
- (id)createViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMarqueeStyleWithParams:(id)a0 callBack:(id /* block */)a1 animationCompleteBlock:(id /* block */)a2;
- (void)setupGradient:(double)a0 andY:(double)a1 andWidth:(double)a2 andHeight:(double)a3;
- (void)setupMask:(double)a0 andY:(double)a1 andWidth:(double)a2 andHeight:(double)a3;
- (void)setupRotationAnimation;
- (id)createLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 shadowColor:(id)a2 shadowOpacity:(double)a3 shadowRadius:(double)a4 shadowOffset:(struct CGSize { double x0; double x1; })a5;
- (id)createShapeLayerWithPath:(id)a0 strokeColor:(id)a1 fillColor:(id)a2 lineWidth:(double)a3 shadowColor:(id)a4 shadowOpacity:(double)a5 shadowRadius:(double)a6 shadowOffset:(struct CGSize { double x0; double x1; })a7;
- (void)setMarqueeStyle:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)view;
- (void)startFadeOutAnimation;
- (id)createView;

@end
