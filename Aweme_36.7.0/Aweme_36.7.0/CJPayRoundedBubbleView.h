@class UIColor, UIImageView, UILabel, UIView, MASConstraint;

@interface CJPayRoundedBubbleView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIView *roundedView;
@property (retain, nonatomic) MASConstraint *textLabelLeftMarginConstraint;
@property (retain, nonatomic) MASConstraint *textLabelTopMarginConstraint;
@property (retain, nonatomic) MASConstraint *textLabelBottomMarginConstraint;
@property (nonatomic, setter=setCornerRadius:) double cornerRadius;
@property (retain, nonatomic, setter=setBGColor:) UIColor *bgColor;
@property (retain, nonatomic, setter=setTextColor:) UIColor *textColor;
@property (nonatomic, setter=setTextSize:) double textSize;

- (void)showViewFromLeftToRightWithCompletion:(id /* block */)a0;
- (void)hideViewFromRightToLeftWithCompletion:(id /* block */)a0;
- (void)updateRoundedBubbleViewWithParams:(id)a0 completion:(id /* block */)a1;
- (void)updateRoundedBubbleViewWithIconURL:(id)a0 withText:(id)a1 isURL:(BOOL)a2 maxTextLength:(unsigned long long)a3;
- (void)p_setDefaultProperty;
- (id)p_truncateString:(id)a0 withMaxLength:(unsigned long long)a1;
- (void)updateTopMarginForArrowBubbleView:(double)a0;
- (void)updateBottomMarginForArrowBubbleView:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
