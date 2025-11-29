@class UITextView, DUXContentSheet, NSString, DUXButton, UILabel, UIView, ACCButton;

@interface ACCSaveLocalGuidePublishTextInputController : UIViewController <UITextViewDelegate, DUXSheetDelegate, UITextPasteDelegate>

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) UITextView *inputTextView;
@property (retain, nonatomic) ACCButton *publishButton;
@property (retain, nonatomic) UIView *editBottomView;
@property (weak, nonatomic) DUXContentSheet *basicSheet;
@property (copy, nonatomic) id /* block */ publishHandler;
@property (nonatomic) long long numberLimit;
@property (copy, nonatomic) NSString *limitToast;
@property (nonatomic) BOOL keyboardShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sheetWillStayAfterClickMaskArea;
- (double)panelViewHeight;
- (void)clickCloseButton;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (id)plainShareText;
- (void)setupConfigWithPublishModel:(id)a0;
- (void)didClickPublishButton:(id)a0;
- (double)iPhoneXBottomOffset;
- (double)calculateSheetHeightWithKeyboardBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShow:(BOOL)a1;
- (void)captionTextInputDidExceedMaxLengthToast;
- (id)pasteFilterAttributedString:(id)a0;
- (id)initWithPublishViewModel:(id)a0 publishHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)show;
- (id)textPasteConfigurationSupporting:(id)a0 combineItemAttributedStrings:(id)a1 forRange:(id)a2;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)addObservers;

@end
