@class UIImageView, UILabel, AWEFeedSyncMultiDevice;

@interface AWEFeedSyncMultiDeviceCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEFeedSyncMultiDevice *device;
@property (retain, nonatomic) UILabel *accessoryLabel;
@property (nonatomic) unsigned long long theme;

- (void)updateDevice:(id)a0 theme:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)titleColor;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
