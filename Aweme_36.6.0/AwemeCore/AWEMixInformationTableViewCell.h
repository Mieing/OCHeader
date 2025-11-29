@class AWEMixVideoModel, UIImageView, LOTAnimationView, UILabel, AWEPaymentBadgeView, UIView;

@interface AWEMixInformationTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIView *chargeCoverView;
@property (retain, nonatomic) AWEMixVideoModel *model;
@property (nonatomic) BOOL isSelected;

+ (id)cellIdentifier;
+ (double)cellHeight;

- (void)configWithMixVideoModel:(id)a0;
- (void)configWithMixVideoModel:(id)a0 isSelected:(BOOL)a1;
- (void)conformWithCompletion:(id /* block */)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)setupUI;

@end
