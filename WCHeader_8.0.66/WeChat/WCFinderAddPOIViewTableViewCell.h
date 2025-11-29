@class UIImageView, UILabel, UIView;

@interface WCFinderAddPOIViewTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *checkBox;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *addrLabel;
@property (retain, nonatomic) UIView *lineView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateMargin;
- (void)configWithPOIDetail:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;

@end
