@class UILabel, UIImageView, UIView;

@interface AWEHotMusicChartInfoView : UIView

@property (retain, nonatomic) UILabel *hotMusicChartLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *musicNameLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)setupAction;
- (void)clickView;
- (void)updateMusicInfoViewWithMusicName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
