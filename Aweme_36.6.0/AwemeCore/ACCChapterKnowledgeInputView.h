@class UITextView, NSString, UIView, UIButton;
@protocol ACCChapterKnowledgeInputViewDelegate;

@interface ACCChapterKnowledgeInputView : UIView <UITextViewDelegate>

@property (weak, nonatomic) id<ACCChapterKnowledgeInputViewDelegate> delegate;
@property (retain, nonatomic) UIView *inputContainer;
@property (retain, nonatomic) UITextView *descTextView;
@property (retain, nonatomic) UITextView *detailTextView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteButtonClicked:(id)a0;
- (void)updateAttributes;
- (void)updateTextViewWithKnowledge:(id)a0;
- (void)setTextLength:(long long)a0 textView:(id)a1;
- (void)configWithKnowledge:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
