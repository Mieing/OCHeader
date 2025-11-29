@class UIScrollView, NSMutableArray, UIStackView;
@protocol IESECShopProductsPromotionFilterContainerDelegate;

@interface IESECShopProductsPromotionFilterContainer : UIView {
    NSMutableArray *_buttons;
    NSMutableArray *_promotionFilterModels;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) id<IESECShopProductsPromotionFilterContainerDelegate> delegate;

- (void)updateWithPromotionFilterButtons:(id)a0;
- (void)tapPromotionFilterButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
