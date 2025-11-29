@class LynxPlatformLength;

@interface LynxBackgroundLazyInfo : NSObject {
    LynxPlatformLength *borderRadiusCalc[8];
}

@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingWidth;

- (void).cxx_destruct;
- (id)init;

@end
