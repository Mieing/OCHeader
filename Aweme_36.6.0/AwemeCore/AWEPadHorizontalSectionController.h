@class NSArray, IGListAdapter, UICollectionView, AWEPadHorizontalSectionViewModel, NSString;

@interface AWEPadHorizontalSectionController : AWEPadBaseListSectionController <AWEBaseListViewControllerDataSource, UIScrollViewDelegate>

@property (weak, nonatomic) UICollectionView *innerCollectionView;
@property (retain, nonatomic) IGListAdapter *innerListAdapter;
@property (retain, nonatomic) NSArray *innerSectionViewModels;
@property (readonly, weak, nonatomic) AWEPadHorizontalSectionViewModel *viewModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewContentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)didBindSectionViewModel;
- (id)sectionViewModels;
- (id)sectionControllerClassArray;
- (void)containerViewDidAppear;
- (struct CGSize { double x0; double x1; })cellContentSizeWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)containerViewDidRefresh;
- (void)setupInnerCollectionView:(id)a0;
- (id)innerListAdapterWithCollectionView:(id)a0;
- (id)innerListDataSourceWithCollectionView:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;

@end
