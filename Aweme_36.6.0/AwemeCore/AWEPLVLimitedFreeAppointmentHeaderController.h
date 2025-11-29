@class AWEPadBaseSectionViewModel, NSString, AWEPadPolymericChannelDataController;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVLimitedFreeAppointmentHeaderController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) AWEPadPolymericChannelDataController *dataController;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageKey;

- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)viewClass;

@end
