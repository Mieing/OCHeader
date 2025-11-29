@class NSString, UITextView;

@interface AWEProfileEditFlowSignatureView : AWEProfileEditFlowStepView <UITextViewDelegate, NSLayoutManagerDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UITextView *contentCalculateHeightTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapNextButton:(id)a0;
- (void)tapPrevButton:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)layoutManager:(id)a0 lineSpacingAfterGlyphAtIndex:(unsigned long long)a1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
