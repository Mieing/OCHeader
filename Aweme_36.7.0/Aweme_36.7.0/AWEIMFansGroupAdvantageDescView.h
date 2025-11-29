@class UILabel, UIView;

@interface AWEIMFansGroupAdvantageDescView : UIView

@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UIView *topTitleLeftLine;
@property (retain, nonatomic) UIView *topTitleRightLine;
@property (copy, nonatomic) id /* block */ themeReloadBlock;

- (void)configWithModel:(id)a0;
- (void)handleThemeReloadNotification;
- (void)__updateLineGradientLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)resetUI;

@end
