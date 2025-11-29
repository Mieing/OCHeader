@class UIStackView, UIImageView, UDRSecondCutPromotionItem, MMUILabel;

@interface SecondCutPromotionItemView : UIStackView

@property (retain, nonatomic) UDRSecondCutPromotionItem *promotionItem;
@property (retain, nonatomic) UIImageView *leadingIcon;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) UIStackView *trailingStack;

- (id)initWithPromotionItem:(id)a0;
- (id)initFromResource:(id)a0 andLocalTextKey:(id)a1;
- (void)_initLayout;
- (void)_initLeadingIcon;
- (void)_initTrailingStack;
- (void).cxx_destruct;

@end
