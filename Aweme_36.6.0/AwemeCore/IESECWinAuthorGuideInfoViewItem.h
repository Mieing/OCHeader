@class UILabel, UIView;

@interface IESECWinAuthorGuideInfoViewItem : UIView

@property (nonatomic) double itemWidth;
@property (retain, nonatomic) UIView *topContianerView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)updateWithGuideInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
