@class UIImageView, UILabel, DeviceViewInfo, UIButton;
@protocol IESLiveAnchorDirectorDeviceViewCellDelegate;

@interface IESLiveAnchorDirectorDeviceViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *deviceImageView;
@property (retain, nonatomic) UILabel *deviceName;
@property (retain, nonatomic) UIButton *connectButton;
@property (nonatomic) BOOL isConnecting;
@property (weak, nonatomic) id<IESLiveAnchorDirectorDeviceViewCellDelegate> delegate;
@property (retain, nonatomic) DeviceViewInfo *info;

- (void)connectDevice;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateDeviceInfo:(id)a0;

@end
