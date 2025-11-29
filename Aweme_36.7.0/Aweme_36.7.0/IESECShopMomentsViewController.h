@class IESECListKitCardPreloader, UIView, IESECListKitBFFViewController, NSString, IESECStorePageContext, IESECShopTabModel, IESECShopMomentsViewModel, FBKVOController, UICollectionViewCell, IESECShopMomentsStatusView;
@protocol IESECShopMomentsVideoCardProtocol, IESECAwemeVideoViewProtocol, IESECStoreContainerProtocol;

@interface IESECShopMomentsViewController : IESECBaseShopTabViewController <UIScrollViewDelegate, UICollectionViewDelegate, IESECAwemeVideoViewDelegate, IESECStoreSplitVideoControl, IESECListCardsContextDelegate, IESECShopTabElementProtocol> {
    IESECShopTabModel *_tabModel;
    id /* block */ _scrollViewWillBeginDraggingCallback;
    id /* block */ _scrollViewDidEndDraggingCallback;
    id /* block */ _scrollViewDidEndDeceleratingCallback;
}

@property (retain, nonatomic) FBKVOController *kvoController;
@property (retain, nonatomic) IESECShopMomentsViewModel *viewModel;
@property (retain, nonatomic) IESECShopMomentsStatusView *statusView;
@property (retain, nonatomic) IESECListKitBFFViewController *listVC;
@property (retain, nonatomic) UIView<IESECAwemeVideoViewProtocol> *player;
@property (weak, nonatomic) UICollectionViewCell<IESECShopMomentsVideoCardProtocol> *currentVideoCard;
@property (nonatomic) double pageInitTime;
@property (nonatomic) double pageReadyTime;
@property (copy, nonatomic) id /* block */ scrollCallBack;
@property (retain, nonatomic) IESECListKitCardPreloader *lynxCardPreloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;

- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void)setupBinding;
- (void)setupRegister;
- (void)tabScrollViewDidScrollCallback:(id /* block */)a0;
- (void)registerTabScrollViewWillBeginDraggingCallback:(id /* block */)a0;
- (void)registerTabScrollViewDidEndDeceleratingCallback:(id /* block */)a0;
- (void)registerTabScrollViewDidEndDraggingCallback:(id /* block */)a0;
- (id)tabScrollViews;
- (void)preloadLynxTemplates;
- (void)trackStayWithEventName:(id)a0 duration:(long long)a1;
- (void)UIApplicationWillResignActiveNotification;
- (void)UIApplicationDidBecomeActiveNotification;
- (id)initWithPageContext:(id)a0 contextV2:(id)a1;
- (void)updateWithPreloadTabModel:(id)a0;
- (void)initFetchShopMomentsData;
- (void)p_reportWithError:(id)a0;
- (void)tryToPlayVideo;
- (void)tryToStopVideo:(id)a0;
- (void)p_loadMoreShopMomentsData;
- (void)muteVideo:(BOOL)a0;
- (void)p_setupInfinitelyRefreshFooter;
- (void)p_footerEndRefreshingWithHasMore:(BOOL)a0;
- (id)p_findVideoCard;
- (void)p_playInCard:(id)a0 withPlayer:(id)a1;
- (void)p_stopInCard:(id)a0 withPlayer:(id)a1;
- (BOOL)p_cardCanPlay:(id)a0 withVisiblePercent:(double)a1;
- (void)p_reloadShopMomentsData;
- (BOOL)videoShouldPause;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupViews;

@end
