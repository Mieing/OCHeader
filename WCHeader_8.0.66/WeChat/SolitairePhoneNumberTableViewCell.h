@class UIImageView, MMUILabel;

@interface SolitairePhoneNumberTableViewCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *phoneNumberLabel;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *accessoryImageView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)configureCellWithPhoneNumber:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
