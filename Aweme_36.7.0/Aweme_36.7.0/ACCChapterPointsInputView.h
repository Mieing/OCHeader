@class UIStackView, UIView, DUXBaseLabel, NSString, UITextView, DUXButton, DUXBaseButton, UIScrollView;
@protocol ACCChapterPointsInputViewDelegate;

@interface ACCChapterPointsInputView : UIView <UITextViewDelegate, ACCChapterKnowledgeInputViewDelegate>

@property (retain, nonatomic) UIView *inputContainer;
@property (retain, nonatomic) UIView *hintContainer;
@property (retain, nonatomic) UIScrollView *knowledgeInputContainer;
@property (retain, nonatomic) UITextView *descTextView;
@property (retain, nonatomic) UITextView *detailTextView;
@property (retain, nonatomic) UIView *knowledgeDescInputView;
@property (retain, nonatomic) UITextView *knowledgeDescTextView;
@property (retain, nonatomic) UIStackView *knowledgeStackView;
@property (retain, nonatomic) DUXButton *addKnowledgeButton;
@property (retain, nonatomic) DUXBaseButton *cancelButton;
@property (retain, nonatomic) DUXBaseButton *confirmButton;
@property (retain, nonatomic) DUXBaseLabel *countDescLabel;
@property (retain, nonatomic) DUXBaseLabel *knowledgeCountDescLabel;
@property (nonatomic) BOOL isAbstractMode;
@property (nonatomic) BOOL isKnowledgeMode;
@property (weak, nonatomic) id<ACCChapterPointsInputViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ resignFirstResponderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHalfAlphabet:(id)a0;
- (double)textInputCount:(id)a0;
- (void)trimTextView:(id)a0 toMaxCount:(long long)a1;
- (BOOL)isEmptyOrBlankContnet:(id)a0;
- (void)setKnowledge:(id)a0 desc:(id)a1;
- (void)updateAttributes;
- (void)updateStackViewLayouts;
- (void)chapterKnowledgeDeteled:(long long)a0;
- (void)countDescLabelTextInit;
- (void)setTextLength:(double)a0 textView:(id)a1 showTipToast:(BOOL)a2;
- (void)setKnowledgeDescLength:(double)a0;
- (void)updateKnowledgeAttributes;
- (void)hintViewClick;
- (void)addKnowledgeButtonClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setDesc:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancel;
- (void)setDetail:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setAbstract:(id)a0;
- (void)confirm;
- (void)keyboardWillChangeFrame:(id)a0;

@end
