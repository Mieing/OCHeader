@interface RTVXRContainerLayoutAttributesSnapshot : NSObject <NSCopying>

@property (nonatomic) unsigned long long contentLayout;
@property (nonatomic) double WHRatio;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) double scale;
@property (nonatomic) BOOL useTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long scaleLevel;
@property (nonatomic) long long alignment;
@property (nonatomic) long long verticalAlignment;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pinchCenter;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrame;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentLayout:(unsigned long long)a0 WHRatio:(double)a1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleLevel:(long long)a1 alignment:(long long)a2 verticalAlignment:(long long)a3;
- (double)contentWidthForContentLayout:(unsigned long long)a0 scaleLevel:(long long)a1;
- (void)updateTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateScale:(double)a0;
- (void)updateScale:(double)a0 pinchCenter:(struct CGPoint { double x0; double x1; })a1;
- (double)contentWidthForScaleLevel:(long long)a0;
- (id)targetFrameFitForScaleLevel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFrameForScaleLevel:(long long)a0 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)scaleLevelForTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (double)maxScale;
- (double)minScale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })currentTransform;

@end
