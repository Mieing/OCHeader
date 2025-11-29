@class UILabel, UIImageView;

@interface AFDPreviewProgressIndicatorView : UIView

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIImageView *separatorImageView;
@property (retain, nonatomic) UILabel *rightLabel;

+ (double)greatHeight;
+ (double)height;

- (void)p_setupViews;
- (BOOL)optimizeProgressBigFont;
- (void)updateWithCurrentCount:(long long)a0 totalCount:(long long)a1;
- (void)updateWithLeftAttributedString:(id)a0 rightAttributedString:(id)a1;
- (void)updateThickStyle;
- (void)updatePureTextStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
