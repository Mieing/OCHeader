@class BDPCloseButton, UITextView, UILabel, UIView;

@interface BDPRightAgeView : UIView

@property (retain, nonatomic) UIView *toastView;
@property (retain, nonatomic) UILabel *toastLabel;
@property (retain, nonatomic) BDPCloseButton *cancelBtn;
@property (retain, nonatomic) UITextView *toastTextView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTips:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cancel;

@end
