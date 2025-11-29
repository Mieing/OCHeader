@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMPrivateChatManagementHelperHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *headerBaseView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIButton *headerActionBtn;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)identifier;

- (void)__setupUI;
- (void)configWithTitle:(id)a0;
- (void)__btnClicked;
- (void)configWithTitle:(id)a0 attributedButtonTitle:(id)a1 imageName:(id)a2;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
