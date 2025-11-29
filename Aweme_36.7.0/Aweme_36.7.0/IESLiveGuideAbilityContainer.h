@class NSString, NSArray, NSMutableSet, NSIndexPath;
@protocol IESLiveGuideAbilityAreaDelegate;

@interface IESLiveGuideAbilityContainer : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSMutableSet *trackedSet;
@property (copy, nonatomic) NSString *lastOperationIdentifier;
@property (nonatomic) BOOL isTrackAbilityReady;
@property (nonatomic) struct CGSize { double width; double height; } lastContainerSize;
@property (nonatomic) BOOL isUpdatedSize;
@property (retain, nonatomic) NSIndexPath *currentOperationIndexPath;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<IESLiveGuideAbilityAreaDelegate> guideAbilityAreaDelegate;
@property (nonatomic) BOOL isDailyMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)totalMaxWidth;
- (void)handleItemTappedTrack:(id)a0;
- (void)handleTrackShow:(id)a0 toolbarItem:(id)a1;
- (void)handleItemShowTrack:(id)a0;
- (void)trackEvent:(id)a0 extraTrackParams:(id)a1;
- (BOOL)canResetClipToBounds;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })size;
- (void)reload:(unsigned long long)a0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)setupViews;

@end
