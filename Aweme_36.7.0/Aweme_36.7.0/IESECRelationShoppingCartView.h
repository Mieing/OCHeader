@class UIImageView;
@protocol IESECRelationShoppingCartViewDelegate;

@interface IESECRelationShoppingCartView : UIView

@property (retain, nonatomic) UIImageView *shoppingCartView;
@property (nonatomic) BOOL shoppingCartShown;
@property (nonatomic) BOOL shoppingCartAnimating;
@property (weak, nonatomic) id<IESECRelationShoppingCartViewDelegate> delegate;

- (void)didTapShoppingCartView;
- (void)showShoppingCartAnimated;
- (void)hideShoppingCartAnimated;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
