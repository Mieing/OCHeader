@class MMDeviceHeadImageView, UILabel;

@interface WCDevicePedometerCell : MMTableViewCell

@property (retain, nonatomic) MMDeviceHeadImageView *headView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)cellHeightForTitle:(id)a0 detail:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initCell;
- (void)setTitle:(id)a0;
- (void)setDeviceIconName:(id)a0;
- (void)setDeviceIconUrl:(id)a0;
- (void)resetIcon;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
