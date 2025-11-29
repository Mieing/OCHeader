@class AWEPadBaseSectionViewModel, AWEGameViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEGameBaseCellController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) AWEGameViewModel *viewModel;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (void)trackPadModuleEvent:(id)a0;
- (void)trackGameEvent:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;

@end
