@class UIColor, LynxBackgroundLazyInfo;

@interface LynxBackgroundInfo : NSObject {
    long long _borderStyles[4];
    LynxBackgroundLazyInfo *_lynxBackgroundLazyInfo;
}

@property (nonatomic) double outlineWidth;
@property (nonatomic) long long outlineStyle;
@property (retain, nonatomic) UIColor *outlineColor;
@property (retain, nonatomic) UIColor *borderTopColor;
@property (retain, nonatomic) UIColor *borderBottomColor;
@property (retain, nonatomic) UIColor *borderLeftColor;
@property (retain, nonatomic) UIColor *borderRightColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long borderTopStyle;
@property (nonatomic) long long borderBottomStyle;
@property (nonatomic) long long borderLeftStyle;
@property (nonatomic) long long borderRightStyle;
@property (readonly, nonatomic) id *borderRadiusCalc;
@property (nonatomic) struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; } borderRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderWidth;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } paddingWidth;
@property (nonatomic) BOOL BGChangedNoneImage;
@property (nonatomic) BOOL BGChangedImage;
@property (nonatomic) BOOL borderChanged;

- (struct { struct CGColor *x0; struct CGColor *x1; struct CGColor *x2; struct CGColor *x3; })borderColors;
- (id *)borderRadiusCalc;
- (id)lynxBackgroundLazyInfo;
- (BOOL)hasIdenticalBorderWidths;
- (BOOL)hasIdenticalBorderStyles;
- (BOOL)hasCoincidentBorderColors;
- (BOOL)hasDifferentBorderRadius;
- (id)getBorderLayerImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPath { } *)getBorderLayerPathWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)makeCssDefaultValueToFitW3c;
- (BOOL)updateOutlineWidth:(double)a0;
- (BOOL)updateOutlineColor:(id)a0;
- (BOOL)updateOutlineStyle:(long long)a0;
- (void)updateBorderColor:(long long)a0 value:(id)a1;
- (BOOL)updateBorderStyle:(long long)a0 value:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPaddingRect:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getBorderWidth;
- (BOOL)isSimpleBorder;
- (BOOL)canUseBorderShapeLayer;
- (void).cxx_destruct;
- (id)init;
- (struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })borderRadius;
- (long long)borderTopStyle;
- (void)setBorderTopStyle:(long long)a0;
- (long long)borderRightStyle;
- (void)setBorderRightStyle:(long long)a0;
- (long long)borderBottomStyle;
- (void)setBorderBottomStyle:(long long)a0;
- (long long)borderLeftStyle;
- (void)setBorderLeftStyle:(long long)a0;
- (BOOL)hasBorder;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getPaddingInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingWidth;
- (void)setPaddingWidth:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setBorderRadius:(struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })a0;

@end
