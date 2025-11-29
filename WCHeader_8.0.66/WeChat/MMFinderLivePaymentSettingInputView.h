@class MMUITextField, NSString, UIImageView, UIView, MMUIButton, MMUILabel;
@protocol MMFinderLivePaymentSettingInputViewDelegate;

@interface MMFinderLivePaymentSettingInputView : MMPageSheetBaseView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *wecoinIconTextFieldBackgroundView;
@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) MMUITextField *wecoinIconTextField;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (nonatomic) double contentViewHeight;
@property (weak, nonatomic) id<MMFinderLivePaymentSettingInputViewDelegate> operationDelegate;
@property (nonatomic) BOOL forceDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentViewHeight:(double)a0 forceDarkMode:(BOOL)a1;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutWecoinIconTextField;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)a0;
- (void)onContentViewTapped;
- (void)backAction;
- (void)onDoneButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
