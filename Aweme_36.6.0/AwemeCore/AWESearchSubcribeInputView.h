@class AWESearchSubcribeAlertButtonContainer, AWESearchSubcribeAlertTextField, UILabel, MASConstraint;

@interface AWESearchSubcribeInputView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWESearchSubcribeAlertTextField *textField;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWESearchSubcribeAlertButtonContainer *buttonsView;
@property (retain, nonatomic) MASConstraint *textFieldToButtonsConstraint;
@property (retain, nonatomic) MASConstraint *errorLabelToButtonsConstraint;
@property (readonly, nonatomic) BOOL isShowingError;

- (void)showPhoneError;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearError;
- (void)showError:(id)a0;

@end
