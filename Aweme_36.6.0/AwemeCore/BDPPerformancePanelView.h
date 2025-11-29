@class UILabel;

@interface BDPPerformancePanelView : UIView

@property (retain, nonatomic) UILabel *cpuUsageLabel;
@property (retain, nonatomic) UILabel *memoryUsageLabel;
@property (retain, nonatomic) UILabel *downloadLabel;
@property (retain, nonatomic) UILabel *fpsLabel;
@property (retain, nonatomic) UILabel *launchLabel;
@property (retain, nonatomic) UILabel *firstRenderLabel;
@property (retain, nonatomic) UILabel *reRenderLabel;
@property (retain, nonatomic) UILabel *pageSwitchLabel;
@property (retain, nonatomic) UILabel *storageLabel;
@property (retain, nonatomic) UILabel *xplayFPSLabel;
@property (retain, nonatomic) UILabel *xplayJitterLabel;
@property (retain, nonatomic) UILabel *xplayKbpsLabel;
@property (retain, nonatomic) UILabel *xplayRTTLabel;
@property (retain, nonatomic) UILabel *xplayLossRateLabel;
@property (retain, nonatomic) UILabel *xplayBlockLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
