@class UIImageView;

@interface AWEProfileExtensionAreaStyleDefaultCardView : AWEProfileExtensionAreaBaseCardView

@property (retain, nonatomic) UIImageView *addView;
@property (retain, nonatomic) UIImageView *deleteView;

- (void)refreshWithEditActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)iconWidth;
- (void)setupSubviews;
- (unsigned long long)cardStyle;

@end
