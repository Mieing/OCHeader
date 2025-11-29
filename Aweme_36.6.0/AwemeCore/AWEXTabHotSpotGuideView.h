@class UILabel, UIImageView, NSDictionary;

@interface AWEXTabHotSpotGuideView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *viewCountLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (copy, nonatomic) NSDictionary *logParams;
@property (nonatomic) double lastShowTime;

- (void)resetLastShowTime;
- (void)updateWithTitleText:(id)a0 viewCountText:(id)a1 logParams:(id)a2;
- (void)markShowTime;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
