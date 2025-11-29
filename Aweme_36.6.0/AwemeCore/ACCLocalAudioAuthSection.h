@class UILabel, UIButton;

@interface ACCLocalAudioAuthSection : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *goSettingButton;
@property (nonatomic) BOOL isNotDetermined;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)sectionHeight;

- (void)goSettingButtonClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
