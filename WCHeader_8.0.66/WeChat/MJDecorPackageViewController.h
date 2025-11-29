@class MMUIActivityIndicatorView, MJDecorPackageViewModel, UICollectionView, NSString;

@interface MJDecorPackageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MJDecorPackageViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)bindViews;
- (void)unbindViews;
- (void)setupViews;
- (void)loadContents;
- (void)updateViewsForWillLoadContents;
- (void)updateViewsForDidLoadContents:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)updateCellSelection;
- (void).cxx_destruct;

@end
