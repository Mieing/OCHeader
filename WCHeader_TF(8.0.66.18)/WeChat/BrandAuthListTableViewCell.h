@class UIImageView, UILabel, MMWebImageView, UIView;

@interface BrandAuthListTableViewCell : UITableViewCell

@property (nonatomic) double superWith;
@property (retain, nonatomic) MMWebImageView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *seperatorLineView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSuperWidth:(double)a0;
- (void)applyScopeItem:(id)a0;
- (void)configureLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)getScopeDescString:(id)a0;
- (id)concatWords:(id)a0 andMaxIndexs:(long long)a1;
- (BOOL)checkLargerThanOne:(id)a0;
- (void).cxx_destruct;

@end
