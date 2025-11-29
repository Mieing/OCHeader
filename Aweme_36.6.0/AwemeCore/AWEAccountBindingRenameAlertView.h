@class NSString, UITextField, AWEUIButton, UILabel, UIView, UIButton;

@interface AWEAccountBindingRenameAlertView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UITextField *renameTextField;
@property (retain, nonatomic) UILabel *failLabel;
@property (retain, nonatomic) AWEUIButton *confirmButton;
@property (retain, nonatomic) AWEUIButton *cancelButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (nonatomic) long long failLabelType;
@property (copy, nonatomic) NSString *recommendName;
@property (copy, nonatomic) NSString *syncTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showWhenNameDuplicate:(id)a0 model:(id)a1;

- (void)p_setupInfoWithModel:(id)a0;
- (id)hintAttributedStringFrom:(id)a0;
- (void)updateFailLabelText:(long long)a0;
- (void)p_hindWithDurationWithToast:(id)a0;
- (void)p_confirmAction;
- (void)p_cancelAction;
- (void)p_clearTextField;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)show;
- (void)textFieldDidChange:(id)a0;

@end
