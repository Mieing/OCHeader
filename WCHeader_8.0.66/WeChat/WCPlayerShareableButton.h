@class UIImageView, RichTextView, UIView;

@interface WCPlayerShareableButton : MMUIButton

@property (retain, nonatomic) RichTextView *richTitle;
@property (retain, nonatomic) UIImageView *indicator;
@property (retain, nonatomic) UIView *hightLightMaskView;

- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)prepareForAccessibility;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
