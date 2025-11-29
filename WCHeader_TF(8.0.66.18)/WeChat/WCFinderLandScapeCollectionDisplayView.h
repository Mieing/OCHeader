@class WCFinderLandScapePlayerParam, NSString, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot, UICollectionView, UILabel, WCFinderFeedContentVM;
@protocol WCFinderCollectionFeedListProvider, WCFinderLandScapeCollectionDisplayViewDelegate;

@interface WCFinderLandScapeCollectionDisplayView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (nonatomic) double layoutWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *lastDataSnapshot;
@property (retain, nonatomic) UILabel *collectionTitleLabel;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) id<WCFinderCollectionFeedListProvider> collectionDataProvider;
@property (nonatomic) BOOL readyToShow;
@property (retain, nonatomic) WCFinderLandScapePlayerParam *param;
@property (weak, nonatomic) id<WCFinderLandScapeCollectionDisplayViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)_setupCollectionViewDataSource;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithContentVM:(id)a0 param:(id)a1;
- (BOOL)shouldShowLandscapeCollectionWithCollectionInfo:(id)a0;
- (void)updateReadyToShowState;
- (void)reloadCollectionDataPullFromTop:(BOOL)a0;
- (void)jumpToTid:(id)a0 animation:(BOOL)a1;
- (id)getNextEpisode;
- (void)checkToPrefetchMoreData;
- (id)diffableItemIdentifiersWithTid:(id)a0;
- (void)onFeedArray:(id)a0 change:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)reportCellEventWithIndexPath:(id)a0 event:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
