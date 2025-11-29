@class ACCAIGCUGCFusionCreationToolsManager, UICollectionView, AWEBinding, AWEGradientView, NSString, ACCAIGCUGCFusionReferenceListFooterView;

@interface ACCAIGCUGCFusionReferenceListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, ACCAIGCUGCFusionReferenceListFooterDelegate, ACCAIGCUGCFusionReferenceListItemViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEGradientView *rightMaskGradientView;
@property (retain, nonatomic) ACCAIGCUGCFusionReferenceListFooterView *footerView;
@property (weak, nonatomic) ACCAIGCUGCFusionCreationToolsManager *creationToolsManager;
@property (retain, nonatomic) AWEBinding *listBinding;
@property (nonatomic) unsigned long long enterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onThemeChanged;
- (void)addNotifications;
- (void)bindObservers;
- (void)scrollViewDidUpdate:(id)a0;
- (id)initWithCreationToolsManager:(id)a0;
- (void)onUGCModelChanged;
- (void)didSelectFooterView;
- (void)didDeselectItemWithModel:(id)a0;
- (double)p_calculateFooterLeftWidth;
- (void)beforeUpdateReferenceItemCellWithModel:(id)a0;
- (void)beforeUpdateReferenceItemCellWithImageModel:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)setupCollectionView;
- (void)updateFooterView;

@end
