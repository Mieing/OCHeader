@class IESLiveLandscapeStatusBarBatteryView, UILabel, IESLiveGCDTimer, IESLiveLandscapeStatusBarNetworkTypeView;

@interface IESLiveLandscapeStatusBarView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveLandscapeStatusBarNetworkTypeView *networkTypeView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) IESLiveLandscapeStatusBarBatteryView *batteryView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL isShowStatusBar;

- (void)showStatusBar:(BOOL)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)_configSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)viewType;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)_updateTimeLabel;

@end
