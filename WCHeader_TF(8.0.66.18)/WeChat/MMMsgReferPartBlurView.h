@class UIColor, RichTextView, MMReferPartialInfo;

@interface MMMsgReferPartBlurView : UIView

@property (retain, nonatomic) UIColor *fromColor;
@property (retain, nonatomic) UIColor *toColor;
@property (nonatomic) BOOL isBehindBlur;
@property (weak, nonatomic) RichTextView *richTextView;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (retain, nonatomic) MMReferPartialInfo *referPartial;

- (id)initWithRichTextView:(id)a0 referPartial:(id)a1 isBehindBlur:(BOOL)a2;
- (void)updateBlurView;
- (void)setReferTextBlurColor:(id)a0;
- (void)updateFrontBlurView;
- (void)updateBehindBlurView;
- (void)updateGradientLayer;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
