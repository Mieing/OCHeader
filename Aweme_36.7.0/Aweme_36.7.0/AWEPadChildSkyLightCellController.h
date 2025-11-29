@class AWEPadBaseSectionViewModel, AWEPLVCommonCardCellDataSource, NSObject;
@protocol AWEPLVSectionViewModelProtocol, AWEPLVCommonCardViewModelProtocol;

@interface AWEPadChildSkyLightCellController : AWPLVCommonCellController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (retain, nonatomic) AWEPLVCommonCardCellDataSource *cardDataSource;
@property (retain, nonatomic) NSObject<AWEPLVCommonCardViewModelProtocol> *viewModel;
@property (nonatomic) BOOL useVerticalCover;
@property (retain, nonatomic) id cardModel;
@property (retain, nonatomic) Class dataModelClass;

- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (id)viewModelMap;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
