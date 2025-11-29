@class MMUILabel, NSString, MMGrowTextView, UIScrollView, UIView, MMUIButton;
@protocol WSCommentInputDelegate;

@interface WSCommentInputViewController : MMWindowViewController <MMGrowTextViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *bgView;
@property (retain, nonatomic) NSString *placeHolder;
@property (retain, nonatomic) UIView *inputPad;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *submitButton;
@property (retain, nonatomic) MMGrowTextView *imputField;
@property (retain, nonatomic) MMUILabel *countLabel;
@property (nonatomic) BOOL initShowKeyboard;
@property (nonatomic) long long maxInputLength;
@property (retain, nonatomic) NSString *oriInputText;
@property (nonatomic) unsigned long long orientationMask;
@property (weak, nonatomic) id<WSCommentInputDelegate> delegate;
@property (nonatomic) BOOL forbidSubmitBlank;
@property (nonatomic) BOOL forbidSubmitOverLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showInputWithPlaceHolder:(id)a0 inputText:(id)a1 initShowKeyboard:(BOOL)a2 maxInputLength:(long long)a3 orientation:(long long)a4;

- (id)initWithPlaceHoler:(id)a0 inputText:(id)a1 initShowKeyboard:(BOOL)a2 maxInputLength:(long long)a3 orientation:(long long)a4;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)clickPadView:(id)a0;
- (void)clickEmptyBgView:(id)a0;
- (void)clickCancel:(id)a0;
- (void)clickSubmit:(id)a0;
- (void)hideSelf;
- (void)updatePadViewFrame:(BOOL)a0 keyBoardHeight:(double)a1;
- (void)updateCountLabelFrame;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configOrietation:(long long)a0;
- (void)configSupportOrietation:(unsigned long long)a0;
- (BOOL)checkStringTrimmingWithString:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)keyboardWillShow:(double)a0;
- (void)keyboardWillHide:(BOOL)a0;
- (BOOL)isShow;
- (void)TextViewDidEnter:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
