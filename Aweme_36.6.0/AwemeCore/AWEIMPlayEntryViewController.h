@class UIStackView, NSArray, UICollectionView, HMDThreadSafeArray, AWEIMPlayEntryContext, NSString;
@protocol AWEIMHalfScreenContainerVCProtocol, AWEIMPlayEntryInterface;

@interface AWEIMPlayEntryViewController : UIViewController <UICollectionViewDelegate, AWEIMHalfScreenContainerScrollProtocol, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (weak, nonatomic) id<AWEIMPlayEntryInterface> playEntryService;
@property (retain, nonatomic) AWEIMPlayEntryContext *context;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIStackView *emptyView;
@property (retain, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) HMDThreadSafeArray *didTrackArray;
@property (weak, nonatomic) id<AWEIMHalfScreenContainerVCProtocol> containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeReload;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)p_prepareData;
- (void)p_makeCollectionView;
- (void)p_reloadDataWithItems:(id)a0;
- (void)p_addEmptyView;
- (void)p_fetchDynamicDataWithCacheCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)scrollView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
