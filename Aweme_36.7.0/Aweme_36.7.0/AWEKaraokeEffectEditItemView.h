@class UILabel, UISlider, UISwitch;

@interface AWEKaraokeEffectEditItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISlider *slideBar;
@property (retain, nonatomic) UISwitch *switchBtn;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ onValueChanged;

- (void)setupContentUI;
- (void)setupTitleUI;
- (void)valueDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)updateValue:(id)a0;
- (void)updateTitle:(id)a0;

@end
