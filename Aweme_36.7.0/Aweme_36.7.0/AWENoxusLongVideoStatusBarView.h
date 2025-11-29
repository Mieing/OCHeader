@class UIImageView, NSTimer, UILabel, UIView;

@interface AWENoxusLongVideoStatusBarView : UIView

@property (retain, nonatomic) UILabel *networkLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *batteryLabel;
@property (retain, nonatomic) UIImageView *batteryImageView;
@property (retain, nonatomic) UIImageView *chongdianImageView;
@property (retain, nonatomic) UIView *batteryView;
@property (retain, nonatomic) NSTimer *timer;

- (void)addNotifications;
- (void)configureUI;
- (void)batteryUsageUpdate;
- (void)batteryStateUpdate;
- (void)networkUpdate;
- (void)realBatteryUsageUpdate;
- (id)awe_currentReachabilityString;
- (void)updateTimeLabelByCurrentTime:(id)a0;
- (void).cxx_destruct;
- (void)timeUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
