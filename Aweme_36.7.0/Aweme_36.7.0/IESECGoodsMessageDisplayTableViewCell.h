@class UILabel, UIImageView, IESECGradientView;

@interface IESECGoodsMessageDisplayTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *nameLable;
@property (retain, nonatomic) UIImageView *avaterImageView;
@property (retain, nonatomic) UILabel *messageLable;
@property (retain, nonatomic) IESECGradientView *gradientView;

- (void)bindData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caculateCellSize;
- (void)bindData:(id)a0 customConfig:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (unsigned long long)style;
- (void)setupSubviews;

@end
