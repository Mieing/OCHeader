@class AWEPadBaseSectionViewModel, AWEPLVTeenAlbumViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVTeenAlbumTitleBottomCellController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEPLVTeenAlbumViewModel *viewModel;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (long long)breakPointCardColumnNum;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
