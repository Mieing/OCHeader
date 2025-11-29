@class UIView, IESECTracker, NSString, IESECGoodsFeedLargeCardViewModel, IESECGoodsBottomActionHelper, IESECWinFeedEnterParameters, IESECGoodsDetailShowRequest, UIViewController, IESECGoodsRitTagModel;
@protocol IESECSKUViewControllerProtocol, IESECGoodsDetailPopoverContentProtocol;

@interface IESECWindowFeedProductCardViewModel : NSObject <IESECGoodsDetailContainerProtocol, IESECGoodsFeedLargeCardCellContentProtocol, IESECGoodsFeedLargeCardCellOperationProtocol, IGListDiffable>

@property (retain, nonatomic) IESECGoodsDetailShowRequest *showDetailRequest;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (nonatomic) BOOL isPresentingPopover;
@property (retain, nonatomic) UIView *popoverBackground;
@property (retain, nonatomic) UIView *popoverContainer;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol> *popoverContent;
@property (retain, nonatomic) IESECTracker *winTracker;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECGoodsFeedLargeCardViewModel *model;
@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (weak, nonatomic) UIViewController *containerVC;
@property (readonly, copy, nonatomic) IESECGoodsRitTagModel *recommendRitTag;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
@property (nonatomic) BOOL shouldDetachLiveFloatOnTopToNextPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
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
- (void)detachLiveFloatOnTopWhenBuyTouTiaoGoodsIfNeeded;
- (void)detachLiveFloatOnTop;
- (void)openReplayWithURLString:(id)a0;
- (void)markNeedsStatusBarAppearanceUpdate;
- (void)goToOrderPageWithCouponId:(id)a0 actionType:(long long)a1 withSKUInfo:(id)a2 onViewController:(id)a3 entranceInfoParamsForSKU:(id)a4 completion:(id /* block */)a5;
- (void)goToNativeOrderPageWithCouponId:(id)a0 actionType:(long long)a1 withSKUInfo:(id)a2 onViewController:(id)a3 entranceInfoParamsForSKU:(id)a4 completion:(id /* block */)a5;
- (void)p_dismissCurrentPopover;
- (void)p_presentPopover:(id)a0;
- (BOOL)isPopoverSKU;
- (void)tapToDismissPopover;
- (void)attachLiveFloatOnTop;
- (void)collectionViewCell:(id)a0 doActionOf:(long long)a1;
- (void)collectionViewCell:(id)a0 doAddCartWithButton:(id)a1;
- (void)jumpStoreCommentAreaWithCell:(id)a0;
- (void)collectionViewCell:(id)a0 doWantWithCompletion:(id /* block */)a1;
- (void)collectionViewCell:(id)a0 didTapImageAtIndex:(long long)a1;
- (void)collectionViewCellTapEffectivePreviewArea:(id)a0;
- (void)collectionViewCellScrollToDetails:(id)a0;
- (void)enterCommodityDetailPage;
- (BOOL)isClosing;
- (id)header;
- (id)tracker;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (double)totalDuration;
- (id)bottomView;
- (BOOL)showingPreview;

@end
