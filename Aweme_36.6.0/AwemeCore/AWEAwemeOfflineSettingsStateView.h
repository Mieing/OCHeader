@class UILabel, AWEAwemeOfflineSettingsLoadingView;

@interface AWEAwemeOfflineSettingsStateView : UIView

@property (retain, nonatomic) AWEAwemeOfflineSettingsLoadingView *loadingView;
@property (retain, nonatomic) UILabel *progressLabel;

- (double)getProgress;
- (void)updateProgress:(double)a0 inDuration:(double)a1;
- (void)updateProgressWithProgress:(double)a0;
- (void)updateLabelWith:(long long)a0;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
