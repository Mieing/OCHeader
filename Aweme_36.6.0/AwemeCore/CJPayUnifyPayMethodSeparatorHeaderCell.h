@class UIImageView, UILabel;

@interface CJPayUnifyPayMethodSeparatorHeaderCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *recommendView;
@property (retain, nonatomic) UILabel *rightTipsLabel;

- (void)bindViewModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)didSelect;

@end
