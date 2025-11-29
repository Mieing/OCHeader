@class UILabel, UIImageView;

@interface AWEGeneralWaterfallVideoTag : UIView

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *tagIcon;
@property (nonatomic) long long tagType;

+ (id)preferredLabelFont;
+ (double)viewWidthWithText:(id)a0 preferredMaxWidth:(double)a1;
+ (BOOL)showNewLargeFontStyle;
+ (id)preferredLabelFontForUGCShowcase;

- (id)hexStringFromString:(id)a0;
- (void)setText:(id)a0 withLeftRightPadding:(id)a1;
- (void)setBackgroundColorWithString:(id)a0;
- (void)setTextColorWithString:(id)a0;
- (void)setIconImage:(id)a0 withLeftRightPadding:(id)a1;
- (void)setIconImageInLocal:(id)a0 withLeftRightPadding:(id)a1;
- (double)getIconSize:(double)a0;
- (void)setIconImageInLocal:(id)a0 withRightPadding:(id)a1 topPadding:(id)a2 ajudstIconSize:(struct CGSize { double x0; double x1; })a3;
- (void)setIconImageInLocal:(id)a0 withLeftRightPadding:(id)a1 ajudstIconSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
