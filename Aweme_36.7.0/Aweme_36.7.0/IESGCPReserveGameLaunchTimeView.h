@class UILabel;

@interface IESGCPReserveGameLaunchTimeView : UIView

@property (retain, nonatomic) UILabel *launchTimeLabel;

- (void)updatelaunchTime:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
