@class UILabel, UIImageView, UIView;

@interface WCFinderManagePOITableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *addrLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *auditLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateMargin;
- (void)configWithPOIDetail:(id)a0;
- (void).cxx_destruct;

@end
