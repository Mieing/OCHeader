@class NSString, UIImageView, UILabel, UIButton;

@interface DYCommonVerifyTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *iconButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

- (void)reloadWithVerificationDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)showAlert;

@end
