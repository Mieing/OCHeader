@class CJPayPaddingLabel, UIFont;

@interface CJPayCoupleLabelView : UIView

@property (retain, nonatomic) CJPayPaddingLabel *firstLabel;
@property (retain, nonatomic) CJPayPaddingLabel *secondLabel;
@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic) double padding;
@property (nonatomic) double labelHeight;
@property (retain, nonatomic) UIFont *font;

- (void)updateCoupleLabelContents:(id)a0;
- (void)updateCoupleLableForSignStatus;
- (struct CGSize { double x0; double x1; })getContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelFont:(id)a1 padding:(double)a2 labelHeight:(double)a3;
- (void)updateLabelFont:(double)a0;
- (void)resetConstraintWithHeightAdaptively;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setUpUI;

@end
