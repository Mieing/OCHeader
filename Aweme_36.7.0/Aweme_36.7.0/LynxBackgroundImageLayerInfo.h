@class LynxBackgroundPosition, LynxBackgroundSize, LynxBackgroundDrawable;

@interface LynxBackgroundImageLayerInfo : NSObject

@property (retain) LynxBackgroundDrawable *item;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paintingRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clipRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } borderRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paddingRect;
@property (nonatomic) unsigned long long backgroundOrigin;
@property (nonatomic) unsigned long long repeatXType;
@property (nonatomic) unsigned long long repeatYType;
@property (retain) LynxBackgroundSize *backgroundSizeX;
@property (retain) LynxBackgroundSize *backgroundSizeY;
@property (retain) LynxBackgroundPosition *backgroundPosX;
@property (retain) LynxBackgroundPosition *backgroundPosY;
@property (nonatomic) long long backgroundClip;
@property (nonatomic) struct { struct CGSize { double width; double height; } topLeft; struct CGSize { double width; double height; } topRight; struct CGSize { double width; double height; } bottomLeft; struct CGSize { double width; double height; } bottomRight; } cornerInsets;

- (struct CGPath { } *)createClipPath;
- (void)flushPropsToDrawable;
- (BOOL)prepareGradientLayers;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;

@end
