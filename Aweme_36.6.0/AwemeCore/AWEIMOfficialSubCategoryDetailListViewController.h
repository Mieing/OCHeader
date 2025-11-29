@class AWEIMOfficialSubCategoryDetailListDataSource, NSString, UICollectionView, UIView;
@protocol AWEIMOfficialSubCategoryDetailListViewControllerDelegate;

@interface AWEIMOfficialSubCategoryDetailListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMOfficialSubCategoryDetailListDataSource *dataSource;
@property (weak, nonatomic) id<AWEIMOfficialSubCategoryDetailListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithData:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupLayout;

@end
