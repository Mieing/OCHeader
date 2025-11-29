@class UIButton, NSString, UILabel, UIViewController;
@protocol IESIMTextEditViewControllerProtocol, AWEIMWelcomeEditFooterCollectionReusableViewProtocol;

@interface AWEIMWelcomeEditFooterCollectionReusableView : UICollectionReusableView <UITextFieldDelegate, UITextViewDelegate>

@property (copy, nonatomic) UIViewController<IESIMTextEditViewControllerProtocol> *welcomeEditView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIButton *submitBtn;
@property (weak, nonatomic) id<AWEIMWelcomeEditFooterCollectionReusableViewProtocol> footerDelegate;
@property (nonatomic) BOOL isShownInHalfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTipLabelForContentTextView;
- (void)resignTextViewFirstResponder;
- (long long)maxContentLength;
- (void)configDefaultData;
- (BOOL)enableNewStyle;
- (void)setupWelcomeMessage:(id)a0;
- (void)becomeTextViewFirstResponder;
- (void)enableSubmitButton:(BOOL)a0;
- (void)updateInputViewUIIfNeed;
- (void)didClickSubmitBtn;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)a0;

@end
