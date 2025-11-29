@class IESECGoodsBottomActionHelper, NSString, NSDictionary, UIWindow, IESECGoodsDetailModel, UIView, UIViewController;
@protocol IESECSKUViewControllerProtocol, IESECGoodsDetailPopoverContentProtocol;

@interface AWEECommercePopoverContainerViewController : UIViewController <IESECGoodsDetailContainerProtocol, AWEECPopoverContainerProtocol>

@property (nonatomic) BOOL isPresentingPopover;
@property (retain, nonatomic) UIView *popoverBackground;
@property (retain, nonatomic) UIView *popoverContainer;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol> *popoverContent;
@property (nonatomic) BOOL showingPreview;
@property (retain, nonatomic) IESECGoodsDetailModel *goodsDetail;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
@property (nonatomic) BOOL shouldDetachLiveFloatOnTopToNextPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) UIWindow *window;

- (void)close:(id)a0 completion:(id /* block */)a1;
- (long long)containerMode;
- (BOOL)presentPopover:(id)a0;
- (BOOL)presentingPopover;
- (void)dismissCurrentPopover;
- (void)transitionToCommentViewController;
- (void)transitionToStoreCommentVC;
- (void)favoriteActionButtonDidTapWithCompletion:(id /* block */)a0;
- (void)addToShoppingCartActionWithSKUInfo:(id)a0;
- (void)isGoingToOrderPage:(BOOL)a0;
- (void)isGoingToAddrBook:(BOOL)a0;
- (void)openAddrBook;
- (id)liveBanner;
- (id)guessQueryEntryView;
- (void)detachLiveFloatOnTopWhenBuyTouTiaoGoodsIfNeeded;
- (void)detachLiveFloatOnTop;
- (void)openReplayWithURLString:(id)a0;
- (void)markNeedsStatusBarAppearanceUpdate;
- (void)goToOrderPageWithCouponId:(id)a0 actionType:(long long)a1 withSKUInfo:(id)a2 onViewController:(id)a3 entranceInfoParamsForSKU:(id)a4 completion:(id /* block */)a5;
- (void)updateCommentContentWithDynamicDict:(id)a0;
- (void)dismissCurrentPopoverWithCompletion:(id /* block */)a0;
- (void)goToNativeOrderPageWithCouponId:(id)a0 actionType:(long long)a1 withSKUInfo:(id)a2 onViewController:(id)a3 entranceInfoParamsForSKU:(id)a4 completion:(id /* block */)a5;
- (void)p_dismissCurrentPopover;
- (void)p_dismissCurrentPopoverWithCompletion:(id /* block */)a0;
- (void)p_presentPopover:(id)a0;
- (BOOL)isPopoverSKU;
- (void)tapToDismissPopover;
- (void)attachLiveFloatOnTop;
- (id)marqueeMessageShowPv;
- (BOOL)isClosing;
- (id)header;
- (id)tracker;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (double)totalDuration;
- (id)bottomView;

@end
