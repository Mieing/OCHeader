@class UIFont, NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, NSIndexPath;

@interface AWETeenLandscapeAlbumPanelSlidingTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *tabTitles;
@property (copy, nonatomic) NSArray *tabCursors;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UIFont *tabTitleFont;
@property (copy, nonatomic) id /* block */ onTabClickedBlock;
@property (copy, nonatomic) id /* block */ trackTabClickedBlock;
@property (nonatomic) long long itemsCountPerTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)p_layoutViews;
- (void)updateSelectedTabToCurrentEpisode:(long long)a0;
- (id)initWithTotalEpisodesCount:(long long)a0 andItemsCountPerTab:(long long)a1;
- (void)p_setupTabTitlesWithTotalEpisodesCount:(long long)a0;
- (BOOL)p_isShowing;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
