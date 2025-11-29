@class NSString, UISwitch, UILabel, UIView;

@interface IESLiveNativeAppInfoPanelCell : UITableViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UISwitch *abilitySwitch;
@property (copy, nonatomic) id /* block */ onSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchDidClick:(id)a0;
- (void)updateWithSwitchModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupUI;

@end
