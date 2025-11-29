@class UIImageView, UILabel;

@interface IESLiveAnchorMultiDeviceStateView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *deviceLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)updateDeviceName:(id)a0;
- (void)updateDeviceConnectState:(BOOL)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
