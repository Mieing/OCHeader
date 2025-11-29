@class HTSLiveGiftItemCollectionLayout, NSString, NSArray, GiftTopic, HTSLiveGiftItemCollectionViewModel, UICollectionView, IESLiveGiftPanelDataSharing, IESLiveRefactGiftPanelViewBuilderLayoutInfo;
@protocol IESLiveRefactGiftPanelEventAction, IESLiveGiftListCollectionViewDelgate;

@interface IESLiveTopicGiftListCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveRefactGiftPanelEventAction, HTSLiveGiftItemCollectionViewModelUIDelegate, IESLiveRefactGiftPanelEventAction, IESLiveGiftListCollectionProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *giftListCollectionViewList;
@property (nonatomic) BOOL isRenderReady;
@property (nonatomic) struct CGPoint { double x; double y; } lastOffset;
@property (nonatomic) long long currentTopicIndex;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelEventAction> eventAction;
@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *panelBuilderLayoutInfo;
@property (retain, nonatomic) HTSLiveGiftItemCollectionLayout *topicCollectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveGiftItemCollectionViewModel *viewModel;
@property (retain, nonatomic) HTSLiveGiftItemCollectionLayout *collectionLayout;
@property (nonatomic) struct CGPoint { double x; double y; } verticalScrollMaxContentOffset;
@property (nonatomic) long long tabIndex;
@property (nonatomic) long long topicIndex;
@property (nonatomic) BOOL isGiftListRefreshed;
@property (nonatomic) BOOL topicCollectionViewScrolling;
@property (retain, nonatomic) GiftTopic *giftTopic;
@property (nonatomic) BOOL selectGiftHalfDisplay;
@property (nonatomic) BOOL isTopicCollectionView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (weak, nonatomic) id<IESLiveGiftListCollectionViewDelgate> delegate;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;

- (void)didSetAttachingDIContext;
- (void)gpe_giftTopicExpandStatusDidChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)gpe_topicIdDidChange:(long long)a0 needScroll:(BOOL)a1;
- (void)gpe_topicCollectionViewDataUpdate;
- (void)scrollToYOffset:(double)a0 withAnimation:(BOOL)a1;
- (void)scrollToXOffset:(double)a0 withAnimation:(BOOL)a1;
- (double)itemTopPositionYForIndexPath:(id)a0;
- (BOOL)needKeepOperationRectOnAutoScroll;
- (void)scrollVerticalToRowIndex:(long long)a0 withAnimation:(BOOL)a1 isPreSelect:(BOOL)a2;
- (void)didUpdateGiftTopic;
- (long long)itemRowIndexForIndexPath:(id)a0;
- (void)giftItemCollectionViewModelShouldLoadMore:(id)a0;
- (void)trackDistinctGiftShow:(id)a0;
- (void)handleNewFullDisplayGiftItemWithOffset:(double)a0 firstScreen:(BOOL)a1;
- (void)trackForNewDisplayCellsIfNeeded:(double)a0 force:(BOOL)a1;
- (void)setEnableLongPress;
- (void)doSecondSlideIfNeed;
- (void)refreshTopicListCollectionViewIfNeed;
- (id)createGiftListCollectionView:(id)a0 giftTopic:(id)a1;
- (id)currentListCollectionView;
- (id)indexPathForGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;

@end
