@class UILabel, NSString;

@interface AWEPOIGoodsDetailElevatorItemView : UIControl

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *key;

- (double)elevatorFontSize;
- (void)updateTitleLabelColor;
- (void)updateWithKey:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTitleFont;

@end
