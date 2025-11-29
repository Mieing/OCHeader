@interface AWETextView : UITextView

@property (nonatomic) BOOL cutFlag;
@property (copy, nonatomic) id /* block */ exceptionRange;
@property (nonatomic) BOOL disablePerformActions;

+ (void)_aweLazyRegisterLoad_Cut;

- (void)cut:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)acc_aweTextView_cut:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityValue;

@end
