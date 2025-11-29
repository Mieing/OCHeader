@class UILabel, UIImageView, UIView;

@interface IESLivePlaybackStatusBarView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *batteryPercentLabel;
@property (retain, nonatomic) UIImageView *wifiIcon;
@property (retain, nonatomic) UIImageView *cellularIcon;
@property (retain, nonatomic) UILabel *cellularTypeLabel;
@property (retain, nonatomic) UIImageView *batteryIcon;
@property (retain, nonatomic) UIImageView *chargeIcon;
@property (retain, nonatomic) UIView *batteryContentView;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)showTimeStr:(id)a0;
- (void)showBatteryPercent:(double)a0;
- (void)showBatteryState:(long long)a0;
- (void)hideAllNetworkShow;
- (void)showWifiIcon;
- (void)showCellular:(id)a0;
- (void)p_addMansonry;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
