@class NSString, BDPAlertView;

@interface BDPAlertTextView : UITextView

@property (weak, nonatomic) BDPAlertView *alertView;
@property (copy, nonatomic) NSString *placeholder;

- (void)numberFieldCancle;
- (void)setDefaultInputAccessoryViewWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
