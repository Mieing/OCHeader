@class NSString, UIImageView, UILabel, UIView;

@interface RoamPackageCreateDeviceCell : UITableViewCell

@property (retain, nonatomic) UILabel *uiNameLabel;
@property (retain, nonatomic) UILabel *uiSubTitleLabel;
@property (retain, nonatomic) UIImageView *uiDeviceIcon;
@property (retain, nonatomic) UIView *uiSeparator;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *iconName;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 width:(double)a2;
- (void)setupViewsWith:(double)a0;
- (void)updateViews;
- (void)setupDeviceName:(id)a0 subTitle:(id)a1 iconName:(id)a2;
- (void)setupDeviceName:(id)a0;
- (void)setupSubTitle:(id)a0;
- (void)setupIcon:(id)a0;
- (void)setShowSeperator:(BOOL)a0;
- (void).cxx_destruct;

@end
