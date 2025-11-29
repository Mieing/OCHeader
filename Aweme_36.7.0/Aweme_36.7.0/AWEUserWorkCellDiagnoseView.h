@class UILabel;

@interface AWEUserWorkCellDiagnoseView : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) long long height;

- (void)updateLabelFontSize:(double)a0;
- (void)configWithContent:(id)a0 maxWidth:(double)a1;
- (void)setViewHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
