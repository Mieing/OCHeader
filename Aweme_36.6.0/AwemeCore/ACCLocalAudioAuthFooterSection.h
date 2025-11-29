@class UILabel;

@interface ACCLocalAudioAuthFooterSection : UITableViewCell

@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *clickableLabel;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)sectionHeight;

- (void)goSettingButtonClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
