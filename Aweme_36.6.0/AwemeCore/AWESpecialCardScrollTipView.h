@class UILabel, UIImageView, AWESpecialCardScrollTipViewConfig;

@interface AWESpecialCardScrollTipView : UIView

@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (copy, nonatomic) AWESpecialCardScrollTipViewConfig *config;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateColor;

@end
