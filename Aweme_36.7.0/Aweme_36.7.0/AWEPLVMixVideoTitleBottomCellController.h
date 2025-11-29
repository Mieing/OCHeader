@class AWEPLVAwemeViewModel, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVMixVideoTitleBottomCellController : AWEPadPolymericChannelVideoBaseCellController

@property (retain, nonatomic) AWEPLVAwemeViewModel *viewModel;
@property (retain, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) double containerWidth;

+ (Class)aAWEPadModuleAdapterClass;

- (id)diffIdentifier;
- (id)aAWEPadModuleAdapter;
- (void)configCardData:(id)a0;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (long long)breakPointCardColumnNum;
- (id)videoTimeFormate:(long long)a0;
- (void)configFavouriteBind:(id)a0;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
