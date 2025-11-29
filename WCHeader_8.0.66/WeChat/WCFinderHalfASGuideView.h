@class UIImageView, UIView, RichTextView, UIButton;

@interface WCFinderHalfASGuideView : UIView

@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) RichTextView *mTitleView;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) UIButton *okButton;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)clickOKButton;
- (void).cxx_destruct;

@end
