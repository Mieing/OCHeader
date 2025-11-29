@class NSArray, UIStackView;

@interface AWEEcommerceGuideSearchAttachedTextView : UIView

@property (retain, nonatomic) NSArray *attachedTexts;
@property (retain, nonatomic) UIStackView *stackView;

+ (id)douyinNumberABCFontOfSize:(double)a0;

- (id)getAttributedStringWithAttachedTextModel:(id)a0;
- (void)updateWithAttachedTexts:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
