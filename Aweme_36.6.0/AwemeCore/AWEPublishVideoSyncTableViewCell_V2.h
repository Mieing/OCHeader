@class DUXPopover, AWEPublishVideoSyncModel_V2, UIImageView, AWEPublishVideoSyncAppModel, UILabel, DUXSwitch, UIView;

@interface AWEPublishVideoSyncTableViewCell_V2 : UITableViewCell

@property (retain, nonatomic) AWEPublishVideoSyncModel_V2 *syncModel;
@property (retain, nonatomic) AWEPublishVideoSyncAppModel *model;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) DUXSwitch *statusSwitch;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) DUXPopover *popover;

- (void)statusSwitched:(BOOL)a0;
- (void)bindAppModel:(id)a0 videoSyncModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)setLineHidden:(BOOL)a0;

@end
