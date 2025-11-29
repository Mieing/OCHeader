@class NSString, MMHeadImageView, UIImageView, MMUIView, UIButton, MMUILabel, WCUITextField, CContact;
@protocol WCPayGPMemberFillMoneyCellDelegate;

@interface WCPayGPMemberFillMoneyCell : MMTableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) MMUIView *cellContentView;
@property (retain, nonatomic) WCUITextField *textField;
@property (retain, nonatomic) MMHeadImageView *headImgView;
@property (retain, nonatomic) MMUILabel *nicknameLabel;
@property (retain, nonatomic) MMUIView *keyboardInputToolBar;
@property (retain, nonatomic) UIImageView *checkMarkImgView;
@property (retain, nonatomic) MMUIView *lineView;
@property (retain, nonatomic) MMUILabel *postfixLabel;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUILabel *commentLabel;
@property (retain, nonatomic) UIButton *previousBtn;
@property (retain, nonatomic) UIButton *nextBtn;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) double payAmount;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic) BOOL disableEdit;
@property (weak, nonatomic) id<WCPayGPMemberFillMoneyCellDelegate> delegate;
@property (nonatomic) unsigned long long maxPerAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupContentView;
- (id)genKeyboardInputToolbar;
- (void)configLayout;
- (void)updateCellContentWithContact:(id)a0 payAmount:(double)a1 displayName:(id)a2 needShowSepLine:(BOOL)a3 comment:(id)a4 disableEdit:(BOOL)a5;
- (void)makeTextFieldBecomeFirstResponder;
- (void)setPreviousBtnEnable:(BOOL)a0;
- (void)setNextBtnEnable:(BOOL)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)resignTextField;
- (void)previousTextField;
- (void)nextTextField;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
