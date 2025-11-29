@class UILabel;

@interface AWEPOIVideoProgressTimeView : UIView

@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressCenterLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;

- (void)updateCurrentTime:(long long)a0 totalTime:(long long)a1;
- (void)adjustLayout;
- (id)formatStringTime:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
