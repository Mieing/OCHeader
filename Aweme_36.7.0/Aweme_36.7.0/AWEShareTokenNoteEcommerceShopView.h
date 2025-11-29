@interface AWEShareTokenNoteEcommerceShopView : AWEShareTokenNoteBaseCardView

@property (nonatomic) BOOL isShopWindow;

- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0 ShopWindow:(BOOL)a1;
- (void)goToShop;
- (id)truncatedString:(id)a0;
- (void)layoutSubviews;

@end
