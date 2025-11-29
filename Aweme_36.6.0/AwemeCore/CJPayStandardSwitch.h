@class UIColor, UISwitch;

@interface CJPayStandardSwitch : UIView

@property (retain, nonatomic) UISwitch *aSwitch;
@property (nonatomic) struct CGSize { double width; double height; } originSwitchSize;
@property (retain, nonatomic) UIColor *onTintColor;
@property (nonatomic, getter=isOn) BOOL on;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;

- (void)setOn:(BOOL)a0 animated:(BOOL)a1 triggerCallback:(BOOL)a2;
- (void)p_config;
- (void)p_makeUI;
- (void)onValueChange;
- (void)p_setEnabled:(BOOL)a0 disableOpacity:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)setEnable:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;

@end
