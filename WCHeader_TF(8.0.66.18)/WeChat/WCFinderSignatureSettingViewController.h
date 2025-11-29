@class UIView, WCFinderContact, MMGrowTextView, NSString, UIScrollView, UILabel, UIButton;
@protocol WCFinderSignatureSettingViewControllerDelegate;

@interface WCFinderSignatureSettingViewController : MMUIViewController <MMGrowTextViewDelegate, WCFinderMentionUserListViewControllerDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *editTitleLabel;
@property (retain, nonatomic) UILabel *wordTips;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) unsigned long long currentTextLength;
@property (nonatomic) BOOL updateTextByMentionVC;
@property (nonatomic) BOOL showSafePanelAlready;
@property (retain, nonatomic) WCFinderContact *contact;
@property (weak, nonatomic) id<WCFinderSignatureSettingViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)OnCancel;
- (void)OnReturn;
- (id)modUserSignaturePromise;
- (id)signatureValidCheckPromise:(id)a0;
- (void)setupSelectRange;
- (void)layoutView;
- (void)setupView;
- (void)pushMentionVC;
- (void)keyboardWillShow:(double)a0;
- (void)keyboardWillHide:(BOOL)a0;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)cutLimitLineNumber:(long long)a0 forTextView:(id)a1;
- (void)updateAttributeStr;
- (void)TextViewDidEnter:(id)a0;
- (id)_onTextView:(id)a0 shouldChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 byReplaceText:(id)a2;
- (id)contactAttrAtTextView:(id)a0 atIndex:(long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)didSelectedMentionUserWith:(id)a0 userContact:(id)a1;
- (void)onMentionContact:(id)a0;
- (void)cancelSelectedMentionUserWith:(id)a0;
- (void)showError:(id)a0;
- (void)updateWordCountTipsLabel:(int)a0;
- (BOOL)triggerSafePanelActionSheetByTitle:(id)a0 subTitle:(id)a1 clickSubTitleAction:(id /* block */)a2 acceptMsg:(id)a3 clickAcceptBlock:(id /* block */)a4 cancelMsg:(id)a5 clickCancelBlock:(id /* block */)a6 buttonModelArray:(id)a7;
- (void).cxx_destruct;

@end
