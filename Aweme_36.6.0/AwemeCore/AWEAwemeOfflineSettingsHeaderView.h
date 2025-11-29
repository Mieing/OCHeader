@class DUXSwitch, UIButton, UILabel;
@protocol AWEAwemeOfflineHeaderViewDelegate;

@interface AWEAwemeOfflineSettingsHeaderView : UIView

@property (retain, nonatomic) DUXSwitch *switchView;
@property (retain, nonatomic) UIButton *wifiDesButton;
@property (retain, nonatomic) UILabel *wifiDesLabel;
@property (weak, nonatomic) id<AWEAwemeOfflineHeaderViewDelegate> delegate;

- (void)clickWifiDesButton;
- (void)updateSwitchViewStateWith:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)switchValueChanged:(BOOL)a0;

@end
