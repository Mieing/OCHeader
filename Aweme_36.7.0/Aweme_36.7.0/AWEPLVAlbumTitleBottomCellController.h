@class AWEPadBaseSectionViewModel, AWEPLVAlbumViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVAlbumTitleBottomCellController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) AWEPLVAlbumViewModel *viewModel;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) double containerWidth;

+ (Class)aAWEPadModuleAdapterClass;

- (id)diffIdentifier;
- (id)aAWEPadModuleAdapter;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (id)getJumpExtraParams;
- (void)configFavoriteBind:(id)a0;
- (void)configCornerIcon:(id)a0;
- (long long)breakPointCardColumnNum;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
