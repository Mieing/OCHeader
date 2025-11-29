@class AWEPadBaseSectionViewModel, NSString;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadPolymericChannelVideoBaseCellController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (copy, nonatomic) NSString *pageKey;

- (id)diffIdentifier;
- (void)trackCardShow;
- (void)viewDidDisplay;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;

@end
