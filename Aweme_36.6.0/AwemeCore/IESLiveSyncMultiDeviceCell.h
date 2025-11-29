@class UIImageView, UILabel, IESLivePcPadItemD;

@interface IESLiveSyncMultiDeviceCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLivePcPadItemD *device;
@property (retain, nonatomic) UILabel *accessoryLabel;
@property (nonatomic) unsigned long long theme;

- (void)updateDevice:(id)a0 theme:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)titleColor;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (BOOL)isDark;
- (void)setupUI;

@end
