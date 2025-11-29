@class NSString, UISwitch, UITextField, UILabel, UIButton;

@interface IESLiveLinkmicToolsIDInfoSettingPanel : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *showPanelLabel;
@property (retain, nonatomic) UISwitch *showPanelSwitch;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UITextField *contentInputField;
@property (retain, nonatomic) UILabel *pasteBoardLabel;
@property (retain, nonatomic) UIButton *pasteBoardBtn;
@property (copy, nonatomic) id /* block */ panelShowStatuChangedCallback;
@property (copy, nonatomic) id /* block */ panelDescChangedCallback;
@property (copy, nonatomic) id /* block */ panelCopyCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchFieldPlaceHolderWithText:(id)a0;
- (void)showPanelSwitchToggled:(id)a0;
- (void)textFieldTextDidChange;
- (void)copyToPastBoard;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;

@end
