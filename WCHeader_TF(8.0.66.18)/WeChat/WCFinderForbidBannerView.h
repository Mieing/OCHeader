@class UIImageView, RichTextView, UIView;

@interface WCFinderForbidBannerView : MMUIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) RichTextView *textView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithIconName:(id)a0 text:(id)a1 level:(unsigned long long)a2;
- (void).cxx_destruct;

@end
