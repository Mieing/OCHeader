@class NSString, NSArray, NSDictionary, AWEPhotoMusicEditorOptimizedCollectionView, NSIndexPath;

@interface AWEAIVideoClipMusicSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEVideoPublishMusicSelectHeaderViewDelegate>

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *previousIndexPath;
@property (copy, nonatomic) NSString *selectedMusicID;
@property (retain, nonatomic) NSArray *musicList;
@property (nonatomic) BOOL musicSelectionInProgress;
@property (retain, nonatomic) NSDictionary *referExtra;
@property (retain, nonatomic) AWEPhotoMusicEditorOptimizedCollectionView *collectionView;
@property (copy, nonatomic) id /* block */ didSelectMusicHandler;
@property (copy, nonatomic) id /* block */ enterMusicLibraryHandler;
@property (nonatomic) BOOL canDeselectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMusicList:(id)a0;
- (id)newCollectionView;
- (void)updateSelectedMusic:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 musicList:(id)a1 referExtra:(id)a2;
- (void)updateUIWithSelectedMusicAndOldList:(id)a0;
- (BOOL)tryPartialUpdateCollecitonViewFrom:(id)a0 to:(id)a1;
- (void)p_startDownloadingMusic:(id)a0 atIndexPath:(id)a1;
- (void)p_updateMusicDownloadStatus:(long long)a0 forCellAtIndexPath:(id)a1;
- (void)selectMusic:(id)a0 error:(id)a1;
- (id)p_cellAtIndexPath:(id)a0;
- (void)musicLibraryIconDidTapped;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)setupCollectionView;

@end
