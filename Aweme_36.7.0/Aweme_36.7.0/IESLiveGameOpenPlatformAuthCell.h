@class UILabel, UISwitch, IESLiveOpenPlatformAuthModel;

@interface IESLiveGameOpenPlatformAuthCell : UITableViewCell

@property (retain, nonatomic) UILabel *scopeLabel;
@property (retain, nonatomic) UISwitch *scopeSwitch;
@property (retain, nonatomic) IESLiveOpenPlatformAuthModel *model;
@property (copy, nonatomic) id /* block */ changeScopeAuthBlock;

- (void)scopeSwitchDidChange;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
