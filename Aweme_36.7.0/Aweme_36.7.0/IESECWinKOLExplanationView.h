@class UILabel;

@interface IESECWinKOLExplanationView : UIView

@property (retain, nonatomic) UILabel *textLabel;

- (void)updateTextWithString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;

@end
