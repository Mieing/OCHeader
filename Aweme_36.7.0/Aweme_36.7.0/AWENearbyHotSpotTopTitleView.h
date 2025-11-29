@class AWENearbyHotSpotStrokeLabel, UIImageView, UIView, UILabel, AWENearbyHotSpotTableViewModel;

@interface AWENearbyHotSpotTopTitleView : UIView

@property (retain, nonatomic) UIView *titleWrapper;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) AWENearbyHotSpotStrokeLabel *topLabel;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *hotNameLabel;
@property (weak, nonatomic) AWENearbyHotSpotTableViewModel *viewModel;

- (void)updateTopTitleView:(id)a0 animate:(BOOL)a1;
- (void)updateTopTitleView:(id)a0;
- (id)topLabelFontWithSize:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
