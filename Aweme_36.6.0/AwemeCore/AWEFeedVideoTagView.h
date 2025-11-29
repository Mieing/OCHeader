@class UILabel, UIImageView;

@interface AWEFeedVideoTagView : UIView

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *tagIcon;

+ (id)preferredLabelFont;
+ (double)viewWidthWithText:(id)a0 preferredMaxWidth:(double)a1;

- (id)hexStringFromString:(id)a0;
- (void)setText:(id)a0 withLeftRightPadding:(id)a1;
- (void)setBackgroundColorWithString:(id)a0;
- (void)setTextColorWithString:(id)a0;
- (void)setIconImage:(id)a0 withLeftRightPadding:(id)a1;
- (void)setIconLocalImage:(id)a0 withLeftRightPadding:(id)a1;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
