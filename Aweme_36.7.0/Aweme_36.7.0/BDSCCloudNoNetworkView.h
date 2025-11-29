@class UILabel, UIButton;

@interface BDSCCloudNoNetworkView : UIView

@property (copy, nonatomic) id /* block */ actionButtonBlock;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *checkLabel;
@property (retain, nonatomic) UIButton *settingsButton;

- (void)settingButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithActionBlock:(id /* block */)a0;

@end
