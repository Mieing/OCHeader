@class IESECShopCartSlideComponentView, IESECShopCartBottomComponentView, LOTAnimationView, NSString, UIView, IESECShopCartModel;
@protocol IESECShopCartViewDelegate;

@interface IESECShopCartView : UIView {
    IESECShopCartModel *_model;
    long long _cartState;
    NSString *_iconType;
    BOOL _cartFirstShow;
    BOOL _cartAnimating;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _slideViewBounds;
}

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) LOTAnimationView *cartLottieView;
@property (retain, nonatomic) UIView *cartView;
@property (retain, nonatomic) IESECShopCartSlideComponentView *slideView;
@property (retain, nonatomic) IESECShopCartBottomComponentView *bottomView;
@property (weak, nonatomic) id<IESECShopCartViewDelegate> delegate;
@property (readonly, nonatomic) BOOL slideHasShown;
@property (copy, nonatomic) NSString *shopCartAnimationRed;
@property (copy, nonatomic) NSString *shopCartAnimationBlack;

- (void)firstShow;
- (void)cartOpaque:(BOOL)a0;
- (void)cartTranslucent:(BOOL)a0;
- (void)updateCartLottieView;
- (id)cartLottiePathWithIconType:(id)a0;
- (void)tapCartView;
- (void)switchState:(long long)a0 animated:(BOOL)a1;
- (void)productAddCartAnimationPlay;
- (void)cartShow:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateViews;
- (void)updateWithModel:(id)a0;

@end
