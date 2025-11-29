@class UIImageView, UILabel, UIView;

@interface WCMomentsPrivacyTypeCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *leftCheckMark;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *lineView;

+ (id)cellIdentifier;
+ (double)heightForTitle:(id)a0 subTitle:(id)a1 cellWidth:(double)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateWithTitle:(id)a0 subTitle:(id)a1 isChecked:(BOOL)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
