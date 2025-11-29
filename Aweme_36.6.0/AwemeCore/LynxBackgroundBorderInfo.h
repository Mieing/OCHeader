@class UIColor;

@interface LynxBackgroundBorderInfo : NSObject

@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadius;
@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadiusRaw;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderWidth;
@property (retain, nonatomic) UIColor *borderTopColor;
@property (retain, nonatomic) UIColor *borderBottomColor;
@property (retain, nonatomic) UIColor *borderLeftColor;
@property (retain, nonatomic) UIColor *borderRightColor;

- (BOOL)radiusEquals:(struct _LynxBorderUnitValue { double x0; long long x1; } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
