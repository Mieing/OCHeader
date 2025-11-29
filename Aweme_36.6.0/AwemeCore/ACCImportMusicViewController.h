@class NSString, ACCLocalAudioDataController, ACCImportMusicViewControllerConfig, AWEASSMusicNavView, ACCImportMusicListViewModel, UICollectionView, NSMutableArray, ACCImportMusicExtractAudioView;
@protocol ACCImportMusicViewControllerDelegate;

@interface ACCImportMusicViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ACCMusicItemCollectionViewCellDelegate>

@property (retain, nonatomic) ACCImportMusicListViewModel *viewModel;
@property (retain, nonatomic) ACCImportMusicViewControllerConfig *config;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEASSMusicNavView *navView;
@property (retain, nonatomic) ACCImportMusicExtractAudioView *extractAudioView;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) ACCLocalAudioDataController *localAudioDataController;
@property (weak, nonatomic) id<ACCImportMusicViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (double)emptySectionHeight;
- (void)reloadSectionData;
- (void)handleExtractAudio:(id)a0;
- (void)requestLocalAudioAuth;
- (void)dismissAlbumViewController;
- (void)didTapClipButton:(id)a0;
- (void)didTapFavoriteButton:(id)a0;
- (void)didLongPress:(id)a0 withGesture:(id)a1;
- (void)didTapApplyButton:(id)a0;
- (id)initWithViewModel:(id)a0 andConfig:(id)a1;
- (id)visibleMusicItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)cancelButtonClicked:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
