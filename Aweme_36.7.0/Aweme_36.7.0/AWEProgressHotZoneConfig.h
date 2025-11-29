@interface AWEProgressHotZoneConfig : NSObject

@property (nonatomic) BOOL shouldEnlargeHotZone;
@property (nonatomic) unsigned long long maskWindowGestureType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hotEdgeInsetForPanGesture;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hotEdgeInsetForLongPress;

@end
