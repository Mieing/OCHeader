@class AWEPadBaseSectionViewModel, NSString, AWEPadPolymericChannelDataController;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadRefreshHeaderViewController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) AWEPadPolymericChannelDataController *dataController;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageKey;
@property (nonatomic) long long refreshCount;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configView:(id)a0;
- (void)trackRefreshClick;
- (void).cxx_destruct;
- (Class)viewClass;

@end
