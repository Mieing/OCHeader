@class AWETheaterPageContext, UICollectionView, NSString, AWETheaterSectionModel, UIViewController;

@interface AWETheaterHistorySectionCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWETheaterSectionModel *sectionModel;
@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ resetHandler;
@property (nonatomic) BOOL isShowFooterView;
@property (nonatomic) double lastWidth;
@property (copy, nonatomic) id /* block */ willDisplayCellHandler;
@property (copy, nonatomic) id /* block */ willDisplayFooterHandler;
@property (copy, nonatomic) id /* block */ historyCellClickBlock;
@property (copy, nonatomic) id /* block */ moreButtonClickBlock;
@property (weak, nonatomic) UIViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWETheaterViewControllerCommonAdapterClass;

- (id)aAWETheaterViewControllerCommonAdapter;
- (void)configWithSectionModel:(id)a0 context:(id)a1;
- (void)didClickMoreCellAction;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
