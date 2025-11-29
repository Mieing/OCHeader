@class UIImageView, AWEPublishAdvanceSettingsItem, UIStackView;

@interface AWEPublishAdvanceSettingsVideoSyncTableViewCellV2 : AWEPublishAdvanceSettingsTableViewCell

@property (retain, nonatomic) UIStackView *iconContainer;
@property (retain, nonatomic) UIImageView *moreIcon;
@property (retain, nonatomic) AWEPublishAdvanceSettingsItem *item;

- (void)setAwe_disableEdit:(BOOL)a0;
- (void)updateWithVideoSyncModel:(id)a0;
- (void)setupIconContainer;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
