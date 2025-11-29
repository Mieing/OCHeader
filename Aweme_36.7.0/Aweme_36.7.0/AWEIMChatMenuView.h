@class AWEIMInputVCBadgeButton, UIView;

@interface AWEIMChatMenuView : UIView

@property (retain, nonatomic) AWEIMInputVCBadgeButton *switchButton;
@property (retain, nonatomic) UIView *separator;
@property (copy, nonatomic) id /* block */ didClickSwitchButton;
@property (copy, nonatomic) id /* block */ canClickSwitchButton;
@property (copy, nonatomic) id /* block */ didClickMenuBlock;
@property (copy, nonatomic) id /* block */ didPopSubMenuBlock;

- (id)p_applyAlpha:(double)a0 toImage:(id)a1;
- (void)refreshCanSwitchMenu;
- (void)configWithModelArray:(id)a0;
- (void)updateSwitchButtonEnbale:(BOOL)a0;
- (id)p_generateSeparator;
- (void)iesim_themeReload:(id)a0;
- (id)p_switchButtonImage;
- (void)p_switchButtonClick;
- (void).cxx_destruct;
- (void)dealloc;

@end
