@class AWEPLVSeriesViewModel;

@interface AWEPLVSeriesFuzzyBottomCellController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) AWEPLVSeriesViewModel *viewModel;

- (void)setSectionViewModel:(id)a0;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:(id)a0;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
