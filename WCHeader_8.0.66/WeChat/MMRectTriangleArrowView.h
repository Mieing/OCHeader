@class UIView;

@interface MMRectTriangleArrowView : MMUIView

@property (nonatomic) double triangePosOriginX;
@property (nonatomic) double triangePosOriginY;
@property (nonatomic) unsigned long long displayState;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *baseContentView;
@property (nonatomic) unsigned long long dataState;
@property (nonatomic) struct CGPoint { double x0; double x1; } arrow;
@property (copy, nonatomic) id /* block */ dismissCallback;

+ (id)createMaskPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 triangleWidth:(double)a2 triangleHeight:(double)a3 orientation:(long long)a4 triangleX:(double)a5 triangleY:(double)a6;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
- (void)addBaseContentView;
- (void)layoutSubviews;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)updateSizeWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateTriangePosLeft:(double)a0;
- (void)updateTriangePosRight:(double)a0;
- (void)updateTriangePosTop:(double)a0;
- (void)updateTriangePosBottom:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)triangeColor;
- (void)updateShapeLayer;
- (void)showWithAnimationFromPositionY:(double)a0 toPositionY:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithAnimationFromPositionY:(double)a0 toPositionY:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)showWithAnimationFromPositionX:(double)a0 toPositionX:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithAnimationFromPositionX:(double)a0 toPositionX:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)showWithAnimationToBottom:(double)a0 horizontalExtendCenter:(double)a1 beforeAnimating:(id /* block */)a2 animating:(id /* block */)a3 completion:(id /* block */)a4;
- (void)showWithAnimationToBottom:(double)a0 middleScale:(double)a1 middleCenterY:(double)a2 xAnchor:(double)a3 xAnchorPart1Position:(double)a4 part1Duration:(double)a5 part2Duration:(double)a6 beforePart2Animating:(id /* block */)a7 part2animating:(id /* block */)a8 completion:(id /* block */)a9;
- (void)showWithoutAnimation;
- (void)showWithAnimationFromPosition:(struct CGPoint { double x0; double x1; })a0 toPosition:(struct CGPoint { double x0; double x1; })a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithAnimationToBottom:(double)a0 horizontalExtendCenter:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithAnimationToMiddleCenterY:(double)a0 centerY:(double)a1 middleScale:(double)a2 xAnchor:(double)a3 xAnchorPart2Position:(double)a4 part1Duration:(double)a5 part2Duration:(double)a6 part1Animating:(id /* block */)a7 completion:(id /* block */)a8;
- (void)dismissWithAnimationFromPosition:(struct CGPoint { double x0; double x1; })a0 toPosition:(struct CGPoint { double x0; double x1; })a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismissWithAnimation;
- (void)onShowed;
- (void)onDismissed;
- (void).cxx_destruct;

@end
