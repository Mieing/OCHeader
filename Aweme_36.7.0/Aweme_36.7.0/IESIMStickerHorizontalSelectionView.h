@class NSString, AWEIMEmoticonCollectionListModel, IESIMStickerHorizontalSelectionViewConfig, UICollectionView, NSMutableSet;
@protocol IESIMStickerHorizontalSelectionViewDelegate, IESIMCollectionViewFirstFrameTrackerProtocol;

@interface IESIMStickerHorizontalSelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESIMStickerHorizontalSelectionView>

@property (retain, nonatomic) IESIMStickerHorizontalSelectionViewConfig *config;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMEmoticonCollectionListModel *listModel;
@property (nonatomic) BOOL needRegisterTrackCell;
@property (retain, nonatomic) id<IESIMCollectionViewFirstFrameTrackerProtocol> firstFrameTracker;
@property (retain, nonatomic) NSMutableSet *shownIDSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMStickerHorizontalSelectionViewDelegate> delegate;

- (void)p_setupUIWithConfig:(id)a0;
- (void)refreshBackgroundColor;
- (void)swipeDismiss;
- (void)reloadDataWithModel:(id)a0;
- (void)reloadDataAndTrackWithModel:(id)a0;
- (void)reloadDataAndTrackWithModel:(id)a0 forceLayout:(BOOL)a1;
- (void)startAllAnimations;
- (void)p_reportFirstFrameWithDuration:(unsigned long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 config:(id)a1;
- (void)p_trackShowIfNeededWithModel:(id)a0 indexPath:(id)a1;
- (void)clearShownCache;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)stopAllAnimations;

@end
