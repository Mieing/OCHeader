@class UITextView, CAGradientLayer, NSString, UIView;

@interface AWEShadowGradientTextView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *topShadowView;
@property (retain, nonatomic) CAGradientLayer *topShadowViewLayer;
@property (retain, nonatomic) UIView *bottomShadowView;
@property (retain, nonatomic) CAGradientLayer *bottomShadowViewLayer;
@property (nonatomic) BOOL showShadow;
@property (retain, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
