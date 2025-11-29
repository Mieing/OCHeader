@class NSString, NSAttributedString;
@protocol LSIMGrowingTextViewDelegate;

@interface LSIMInputTextViewWrapper : UITextView <LSIMGrowingTextViewProtocol, UITextViewDelegate>

@property (weak, nonatomic) id<LSIMGrowingTextViewDelegate> textViewDelegate;
@property (nonatomic) double inputTextViewMinHeight;
@property (nonatomic) double inputTextViewMaxHeight;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshTextViewFrameIfNeed;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
