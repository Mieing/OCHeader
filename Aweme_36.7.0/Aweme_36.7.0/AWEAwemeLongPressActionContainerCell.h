@class NSArray, UICollectionView, AFDLongPressContext, NSString;

@interface AWEAwemeLongPressActionContainerCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isDislikeUnfold;
@property (nonatomic) BOOL userScrolled;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (nonatomic) BOOL hasUpdatedWithInsertAnimation;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (double)getContentWidth;
- (BOOL)p_needHorizontalOneCell;
- (void)configureWithContainerModel:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)configureWithModel:(id)a0;

@end
