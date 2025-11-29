@class UILabel, UIImageView, UIView;

@interface AWELandscapeStatusBarBatteryView : UIView

@property (retain, nonatomic) UILabel *levelLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *levelProgressView;
@property (retain, nonatomic) UIImageView *chargingImageView;
@property (retain, nonatomic) UIView *batteryAnodeView;

- (void)__configSubviews;
- (void)hideBatteryView;
- (void)__updateBatteryView;
- (void)__handleBatteryStateChangedNotification:(id)a0;
- (double)__batteryWidth;
- (void)showBatteryView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (void)dealloc;

@end
