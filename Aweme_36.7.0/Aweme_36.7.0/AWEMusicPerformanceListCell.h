@class NSString, AWEMusicPerformanceListCellFindMoreView, AWEMusicPerformancePageModel, UICollectionView;
@protocol AWEMusicPerformanceListCellDelegate;

@interface AWEMusicPerformanceListCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEMusicPerformanceListCellFindMoreView *findMoreView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) BOOL hasShowedMore;
@property (retain, nonatomic) AWEMusicPerformancePageModel *pageModel;
@property (weak, nonatomic) id<AWEMusicPerformanceListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)kCellTopPadding;
+ (double)kCellHeight;
+ (double)kCellSpacing;
+ (double)kFindMoreWidth;
+ (double)kCellWidth;
+ (double)cellHeight;

- (void)reloadCollectionView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
