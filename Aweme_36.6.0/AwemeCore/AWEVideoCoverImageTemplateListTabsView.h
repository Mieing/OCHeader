@class UIView, NSString, UICollectionViewFlowLayout, UIButton, AWENewVideoCoverEditTemplateViewModel, NSMutableArray, UICollectionView, NSIndexPath;
@protocol AWEVideoCoverImageTemplateListTabsViewDelegate;

@interface AWEVideoCoverImageTemplateListTabsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (nonatomic) BOOL isAutoLandingTabHasBeenTracked;
@property (retain, nonatomic) NSMutableArray *templateCategoriesArray;
@property (retain, nonatomic) NSIndexPath *currentSelectedTabIndexPath;
@property (weak, nonatomic) id<AWEVideoCoverImageTemplateListTabsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)a0;
- (void)p_setupConstraint;
- (void)scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)trackCurrentSelectedTabIndexPathWithType:(id)a0;
- (void)selectTabAtIndexPath:(id)a0 animated:(BOOL)a1 isClick:(BOOL)a2;
- (void)setClearButtonSelected:(BOOL)a0;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
