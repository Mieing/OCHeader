@interface WCFinderSignatureEditView : MMGrowTextView

@property (copy, nonatomic) id /* block */ textShouldChangeChecker;

- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
