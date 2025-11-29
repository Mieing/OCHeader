@class NSMutableSet, IESECOrderListBaseViewController;

@interface IESECOrderListEventImpl : IESECOrderBaseEventImpl {
    IESECOrderListBaseViewController *_viewController;
}

@property (retain, nonatomic) NSMutableSet *oftenBuyShownKeySet;

- (void)selfTabbarTappedWithEventData:(id)a0;
- (id)findSliceTabBarFromElementView:(id)a0;
- (void)selfHeaderShowMenuWithEventData:(id)a0;
- (void)selfScrollToGuessYouLikeWithEventData:(id)a0;
- (void)selfSetStatusBarWithEventData:(id)a0;
- (void)selfShowOftenBuyShopWithEventData:(id)a0;
- (void)selfToTabWithEventData:(id)a0;
- (void)selfSlideChangeTabWithEventData:(id)a0;
- (void)selfChangeTabAnimatedWithEventData:(id)a0;
- (void)selfSlideToChangeTabIndexWithEventData:(id)a0;
- (void)selfShowBottomBarWithEventData:(id)a0;
- (void)selfCloseBottomBarWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)setViewController:(id)a0;
- (id)viewController;

@end
