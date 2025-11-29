@class CContact, UILabel, UIView, MMHeadImageView;

@interface WCMomentsUserTableViewCell : MMTableViewCell

@property (retain, nonatomic) MMHeadImageView *headerView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) CContact *userContact;

+ (id)defaultIdentifier;
+ (double)heightForTableView:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
