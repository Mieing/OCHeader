@class UIImageView, UILabel, UIButton;

@interface AWEDetailPageInfoBannerView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *usageLabel;
@property (retain, nonatomic) UILabel *usageCount;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
