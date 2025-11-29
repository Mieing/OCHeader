@class UIImageView, UILabel, UIView, LiveAccountSwitchModel;

@interface LiveAccountSwitchButton : UIButton

@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) UIView *accountCardView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) LiveAccountSwitchModel *model;

- (id)initWithType:(unsigned long long)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)updateUI;

@end
