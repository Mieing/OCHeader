@class NSString, UICollectionView, ACCPicTemplatePanelDataManager, UIView, NSIndexPath, UIButton;
@protocol AWECoverPicTemplatePanelCategoryViewDelegate;

@interface AWECoverPicTemplatePanelCategoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIView *separatedLineView;
@property (retain, nonatomic) UICollectionView *categoryListView;
@property (retain, nonatomic) UIView *indicationView;
@property (weak, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (weak, nonatomic) id<AWECoverPicTemplatePanelCategoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)a0;
- (BOOL)isSelected:(id)a0;
- (void)scrollToCategoryAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)isValidIndexPath:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
