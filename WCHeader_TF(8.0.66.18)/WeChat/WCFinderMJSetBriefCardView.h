@class MMUIButton, UIImageView, UIView, RichTextView, UILabel;

@interface WCFinderMJSetBriefCardView : MMUIView

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIImageView *mediaBkgImage;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *button;

+ (id)buildTitleTextView:(double)a0;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutAllSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithVM:(id)a0 clickBlock:(id /* block */)a1;
- (void)updateWithImageUrl:(id)a0 defaultImage:(id)a1 title:(id)a2 subTitle:(id)a3 btnSvgIcon:(id)a4 btnTitle:(id)a5 clickBlock:(id /* block */)a6;
- (void).cxx_destruct;

@end
