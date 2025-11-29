@class SecondCutPromotionItemStackView, RichTextView, MMUILabel;

@interface EditVideoJumpMorePageSheetContentView : UIView

@property (retain, nonatomic) RichTextView *titleView;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) SecondCutPromotionItemStackView *promotionItemStackView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_initTitle;
- (void)_initSubtitle;
- (void)_initPromotionItemStackView;
- (void)setPromotionItems:(id)a0;
- (void)_heightToFit;
- (void).cxx_destruct;

@end
