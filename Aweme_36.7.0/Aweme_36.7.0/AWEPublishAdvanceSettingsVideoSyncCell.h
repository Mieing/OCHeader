@class UIButton, AWEPublishAdvanceSettingsItem, UIStackView;

@interface AWEPublishAdvanceSettingsVideoSyncCell : AWEPublishAdvanceSettingsTableViewCell

@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) UIButton *ulikeButton;
@property (retain, nonatomic) UIButton *xiguaButton;
@property (retain, nonatomic) AWEPublishAdvanceSettingsItem *item;

- (void)buttonDidClick:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
