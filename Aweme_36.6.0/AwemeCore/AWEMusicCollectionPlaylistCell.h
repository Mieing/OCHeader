@class NSArray, UICollectionView, NSMutableSet, UIView, NSString;
@protocol AWEMusicCollectionPlaylistCellDelegate;

@interface AWEMusicCollectionPlaylistCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView *moreTipView;
@property (nonatomic) BOOL canGotoPlaylist;
@property (retain, nonatomic) NSArray *playlistArray;
@property (retain, nonatomic) NSMutableSet *reportEventRecordSet;
@property (nonatomic) BOOL haveMorePlaylist;
@property (copy, nonatomic) id /* block */ gotoPlaylistBlock;
@property (copy, nonatomic) id /* block */ clickPlaylistBlock;
@property (copy, nonatomic) id /* block */ clickPlaylistCreateBlock;
@property (copy, nonatomic) id /* block */ didShowPlaylistBlock;
@property (weak, nonatomic) id<AWEMusicCollectionPlaylistCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)itemFullWidth;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (double)minimumInteritemSpacing;

- (void)configSubviews;
- (id)p_playlistAtIndex:(long long)a0;
- (void)tryGotoDetailIsClick:(BOOL)a0;
- (void)refreshWithPlaylistArray:(id)a0 haveMorePlaylist:(BOOL)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;

@end
