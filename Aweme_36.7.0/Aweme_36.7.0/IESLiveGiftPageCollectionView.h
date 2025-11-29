@class NSDate, UIView, NSArray, NSString, CAGradientLayer, UICollectionView, IESLiveGiftListItem, HTSLiveGiftItemCollectionLayout;
@protocol IESLiveRefactGiftPanelEventAction, HTSLiveGiftRouter, IESLiveGiftListCollectionProtocol, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftPageCollectionView : UIView <IESLiveGiftListCollectionViewDelgate, UICollectionViewDelegate, UICollectionViewDataSource, IESLiveRefactGiftPanelEventAction>

@property (retain, nonatomic) UICollectionView *pageCollectionView;
@property (retain, nonatomic) HTSLiveGiftItemCollectionLayout *pageCollectionLayout;
@property (retain, nonatomic) NSArray *giftListCollectionViewList;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) BOOL isRenderReady;
@property (nonatomic) BOOL isInVerticalDragging;
@property (retain, nonatomic) NSDate *beginVerticalDraggingTime;
@property (nonatomic) unsigned long long start_row_location;
@property (nonatomic) unsigned long long max_scroll_rows;
@property (retain, nonatomic) NSDate *lastGiftPagesShowTime;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelEventAction> eventAction;
@property (retain, nonatomic) id<HTSLiveGiftRouter> router;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) BOOL isFrameChanging;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (nonatomic) BOOL enableTopicScroll;
@property (nonatomic) struct CGPoint { double x; double y; } lastOffset;
@property (weak, nonatomic) UIView<IESLiveGiftListCollectionProtocol> *topicCollectionView;
@property (retain, nonatomic) IESLiveGiftListItem *giftListItem;
@property (nonatomic) BOOL isOperationExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_giftTopicExpandStatusWillChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)gpe_giftOperationChangeToExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void)gpe_giftTopicExpandStatusDidChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)sendGiftFromCell;
- (void)giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)giftListScrollViewDidEndDecelerating:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)updateFrameForMask;
- (void)updateGiftList;
- (id)createGiftListView:(long long)a0 viewModel:(id)a1;
- (void)showPropToastIfNeededWithPageType:(long long)a0;
- (void)refreshGiftListCollectionViewIfNeedWithGiftListItem:(id)a0;
- (void)_updateCollectionViewsOnGiftListRefreshed;
- (void)giftListScrollViewEndScroll;
- (void)_trackLivesdkGiftPanelScrollEvent;
- (void)trackTabChange:(long long)a0;
- (void)trackTabPageChange:(unsigned long long)a0 fromTabIndex:(unsigned long long)a1;
- (void)updateTopicList;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;

@end
