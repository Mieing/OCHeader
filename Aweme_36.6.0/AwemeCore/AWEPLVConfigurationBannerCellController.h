@class AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVConfigurationBannerCellController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) BOOL hasShow;

- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)viewDidEndDisplay;
- (id)bannerCommonTrackParams;
- (void)configCardCellGradientView:(id)a0;
- (void)trackGameEventIfNeeded:(id)a0;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
