@class MMDeviceHeadImageView, UILabel, NSString;

@interface WCMyDeviceCell : MMTableViewCell

@property (nonatomic) BOOL isInited;
@property (retain, nonatomic) MMDeviceHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *deviceNameLbl;
@property (retain, nonatomic) UILabel *deviceDetailLbl;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *deviceName;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initCell;
- (void)setDeviceName:(id)a0 detail:(id)a1;
- (void)setDefaultIcon:(id)a0;
- (void).cxx_destruct;

@end
