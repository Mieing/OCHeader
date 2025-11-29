@class NSDate, NSString, NSArray, IESLiveVSGiftPanelCommonReactionCenter, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftReformListCollectionViewLayout, IESLiveVSGiftItem, NSIndexPath;

@interface IESLiveVSGiftReformSectionGiftListItem : IESLiveDynamicModel <IESLiveVSGiftPanelCommonReaction, IESLiveVSGiftSectionItem, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveVSGiftItem *currentSelectedItem;
@property (retain, nonatomic) NSArray *giftList;
@property (retain, nonatomic) IESLiveVSGiftReformListCollectionViewLayout *layout;
@property (retain, nonatomic) NSIndexPath *currentSelectedIndexPath;
@property (nonatomic) BOOL isInVerticalDragging;
@property (retain, nonatomic) NSDate *beginVerticalDraggingTime;
@property (nonatomic) long long startRowLocation;
@property (nonatomic) long long maxScrollRows;
@property (copy, nonatomic) id /* block */ dataSourceDidUpdate;
@property (copy, nonatomic) id /* block */ selectedItemDidChange;
@property (readonly, nonatomic) unsigned long long numberOfPages;
@property (readonly, nonatomic) NSArray *comboInfos;
@property (readonly, nonatomic) unsigned long long numberOfItemsPerPage;
@property (nonatomic) long long pageIndex;
@property (copy, nonatomic) NSString *sendDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;

- (id)diffIdentifier;
- (void)giftPanelWillDismiss;
- (id)initWithDataSharing:(id)a0 withReactionCenter:(id)a1;
- (void)guestInfoDidUpdate:(id)a0;
- (void)selectGiftWithGiftID:(id)a0 success:(BOOL *)a1;
- (void)p_didSelectItemAtIndexPath:(id)a0 fromOpen:(BOOL)a1;
- (void)tr_tapGift:(id)a0 fromTap:(BOOL)a1;
- (id)p_createGiftItemWithGift:(id)a0 page:(id)a1 index:(long long)a2;
- (long long)minVerticalScrollRowFullyDisplay:(id)a0;
- (long long)maxVerticalScrollRowFullyDisplay:(id)a0;
- (void)_trackLivesdkGiftPanelScrollEventAndRestoreParams:(id)a0;
- (void)_trackLivesdkGiftPanelScrollEvent:(long long)a0;
- (BOOL)isEqualToDiffableItem:(id)a0;
- (id)indexPathFromGiftItem:(id)a0;
- (void)updateItemWithPage:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)buildCollectionViewLayout;

@end
