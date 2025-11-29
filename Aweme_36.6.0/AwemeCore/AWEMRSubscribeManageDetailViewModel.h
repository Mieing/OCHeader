@class AWEMRSubscribeManageDisturbSectionViewModel, AWEMRSubscribeManageDetailDataContext, AWEMRSubscribeManageCategorySectionViewModel, AWEMRSubscribeManageDetailTracker, AWEMRSubscribeManageSwitchSectionViewModel;

@interface AWEMRSubscribeManageDetailViewModel : AWEMRSubscribeManageBaseViewModel

@property (retain, nonatomic) AWEMRSubscribeManageDetailDataContext *dataContext;
@property (retain, nonatomic) AWEMRSubscribeManageDetailTracker *tracker;
@property (retain, nonatomic) AWEMRSubscribeManageSwitchSectionViewModel *subscribeSectionVM;
@property (retain, nonatomic) AWEMRSubscribeManageCategorySectionViewModel *categorySectionVM;
@property (retain, nonatomic) AWEMRSubscribeManageDisturbSectionViewModel *disturbSectionVM;

- (void)fetchListData;
- (void)setupViewModel;
- (id)initWithServiceAccountModel:(id)a0 enterFrom:(id)a1;
- (void)p_setupSectionViewModels;
- (void)p_updateSectionViewModels;
- (void).cxx_destruct;

@end
