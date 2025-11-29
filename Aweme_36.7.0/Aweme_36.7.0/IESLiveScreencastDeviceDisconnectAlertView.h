@class UIImageView, UILabel, NSString;

@interface IESLiveScreencastDeviceDisconnectAlertView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *deviceName;

- (double)widthForLayout;
- (double)heightForLayout;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;

@end
