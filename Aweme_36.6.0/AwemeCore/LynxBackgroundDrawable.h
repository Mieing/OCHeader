@class LynxBackgroundSize, LynxBackgroundPosition;

@interface LynxBackgroundDrawable : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long repeatX;
@property (nonatomic) unsigned long long repeatY;
@property (nonatomic) long long clip;
@property (nonatomic) unsigned long long origin;
@property (retain, nonatomic) LynxBackgroundPosition *posX;
@property (retain, nonatomic) LynxBackgroundPosition *posY;
@property (retain, nonatomic) LynxBackgroundSize *sizeX;
@property (retain, nonatomic) LynxBackgroundSize *sizeY;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadius;

- (double)getImageWidth;
- (double)getImageHeight;
- (struct CGSize { double x0; double x1; })computeBackgroundSizeWithImageSize:(const struct CGSize { double x0; double x1; } *)a0 andPaintBoxSize:(const struct CGSize { double x0; double x1; } *)a1;
- (void)computeBackgroundPosition:(double *)a0 offsetY:(double *)a1 paintBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)onDraw:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawInContext:(struct CGContext { } *)a0 borderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 paddingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)drawTextBackgroundInContext:(struct CGContext { } *)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (BOOL)isReady;
- (id)init;
- (BOOL)isGradient;

@end
