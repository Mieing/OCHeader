@class UICollectionViewLayout, NSMutableDictionary, UICollectionView, NSTimer, NSString, NSMutableArray, AWELiveAppointmentSkyLightScrollTailView;

@interface AWELiveAppointmentSkyLightView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWELiveTabSkyLightViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewLayout *collectionLayout;
@property (retain, nonatomic) NSMutableArray *feedItems;
@property (retain, nonatomic) NSMutableDictionary *showedItems;
@property (retain, nonatomic) NSTimer *refreshTimer;
@property (retain, nonatomic) NSTimer *lowerRequstTimer;
@property (nonatomic) BOOL isCanRequest;
@property (nonatomic) BOOL isNeedFirstIgnoreRequest;
@property (nonatomic) BOOL isShowSkyLightView;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) AWELiveAppointmentSkyLightScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) BOOL isTrackCentralizedPageShow;
@property (copy, nonatomic) id /* block */ dataStateCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getRefreshDuration;
- (void)refreshSkyLight;
- (void)requestSkyLightDataWithCompletion:(id /* block */)a0;
- (void)p_refreshWithTimer;
- (void)clearShowItemCache;
- (void)appointmentRequestWithFeeditem:(id)a0 completion:(id /* block */)a1;
- (void)openLiveCentralizedPage;
- (BOOL)enableShowMoreFooterView;
- (void)trackCentralizedPageWithEvent:(id)a0;
- (void)viewPageEnterRequest;
- (void)activateCardShowStatic;
- (void)subscribeEventBuyTicketSuccess;
- (void)unsubscribeEvent;
- (double)skyLightHeight;
- (void)skylightWillShowWithAnimated:(BOOL)a0;
- (void)skylightWillHiddenWithAnimated:(BOOL)a0;
- (void)viewPageLeave;
- (void)viewPageEnter;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)setItems:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupViews;

@end
