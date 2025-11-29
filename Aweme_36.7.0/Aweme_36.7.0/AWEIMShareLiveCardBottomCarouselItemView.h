@class UIImageView, UILabel;

@interface AWEIMShareLiveCardBottomCarouselItemView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textView;

+ (id)textFont;
+ (double)itemHeight;

- (void)p_addSubviews;
- (void)p_updateLayout;
- (void)configWithItemModel:(id)a0;
- (void)resetForReuse;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
