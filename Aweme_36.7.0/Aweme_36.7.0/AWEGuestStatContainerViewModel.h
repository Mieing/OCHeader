@class NSString, AWETabContainerSectionViewModel;

@interface AWEGuestStatContainerViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWETabContainerSectionViewModel *tabSectionVM;
@property (copy, nonatomic) NSString *landingTabID;
@property (nonatomic) BOOL isTabReady;

- (void)configWithRouterParamDict:(id)a0;
- (void)setupViewModel;
- (unsigned long long)landingIndex;
- (void)setupTabSectionVM;
- (void).cxx_destruct;

@end
