@class UILabel, UIImageView, UIView;

@interface IESLiveLandscapeStatusBarBatteryView : UIView

@property (retain, nonatomic) UILabel *levelLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *levelProgressView;
@property (retain, nonatomic) UIImageView *chargingImageView;
@property (retain, nonatomic) UIView *batteryAnodeView;

- (void)hideBatteryView;
- (void)showBatteryView;
- (void)_configSubviews;
- (void)_updateBatteryView;
- (void)_handleBatteryStateChangedNotification:(id)a0;
- (double)_batteryWidth;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
