@class AWEPLVAlbumViewModel;

@interface AWEPadListLimitedFreeAlbumCellController : AWEPLVAlbumFuzzyBottomCellController

@property (retain, nonatomic) AWEPLVAlbumViewModel *viewModel;

- (id)diffIdentifier;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
