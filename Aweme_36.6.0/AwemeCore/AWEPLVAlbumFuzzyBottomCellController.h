@class AWEPadBaseSectionViewModel, AWEPLVAlbumViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVAlbumFuzzyBottomCellController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) AWEPLVAlbumViewModel *viewModel;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:(id)a0;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (id)getJumpExtraParams;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
