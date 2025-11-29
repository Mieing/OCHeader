@interface AWEMusicPerformanceListViewController : AWEBaseListViewController

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (id)initWithMusicianId:(id)a0 musicianName:(id)a1;
- (void)viewDidLoad;
- (BOOL)hidesBottomBarWhenPushed;
- (void)quit;
- (void)setupCollectionView:(id)a0;

@end
