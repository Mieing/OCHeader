@class UILabel, UIImageView, UIButton;

@interface AWEUserWorkSingleColumnBottomView : UIView

@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *iconCountActionBtn;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)setCountStringWith:(id)a0;
- (void)setIconWith:(id)a0;
- (void)setDateStringWith:(id)a0;
- (void)iconCountActionBtnTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
