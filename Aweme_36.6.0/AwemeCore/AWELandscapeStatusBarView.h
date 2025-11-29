@class NSTimer, UILabel, AWELandscapeStatusBarBatteryView, AWELandscapeStatusBarNetworkTypeView;

@interface AWELandscapeStatusBarView : UIView

@property (retain, nonatomic) AWELandscapeStatusBarNetworkTypeView *networkTypeView;
@property (retain, nonatomic) UILabel *timeLable;
@property (retain, nonatomic) AWELandscapeStatusBarBatteryView *batteryView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isShowStatusBar;

- (void)__configSubviews;
- (void)showStatusBar:(BOOL)a0;
- (void)__updateTimelable;
- (void).cxx_destruct;
- (id)init;
- (void)showStatusBar;
- (void)hideStatusBar;

@end
