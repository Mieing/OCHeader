@class IESECLiveAnchorCreateFlashSaleItem, NSString, UITextField, UIView, UILabel, MASConstraint;

@interface IESECLiveAnchorFlashSaleCreateAccessoryInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) MASConstraint *headerBottomToTextFieldTopConstraint;
@property (retain, nonatomic) MASConstraint *textFieldTopToContainerTopConstraint;
@property (readonly, nonatomic) UIView *headerView;
@property (readonly, nonatomic) UILabel *headerTextLabel;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, nonatomic) UILabel *confirmLabel;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *coverView;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) long long lengthLimit;
@property (retain, nonatomic) NSString *lastFilledTextContent;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *item;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ validateTitleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachTo:(id)a0;
- (void)coverViewDidTap:(id)a0;
- (void)confirmLabelDidTap:(id)a0;
- (void)p_updateAfterSettingValue;
- (BOOL)p_enterText;
- (BOOL)p_validateSpecialText:(id)a0;
- (BOOL)p_validateText:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithItem:(id)a0;

@end
