@class AWETabContainerSectionViewModel, AWEGuestHomeHeaderSectionViewModel, AWEGuestHomePageContext;

@interface AWEGuestHomeViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (retain, nonatomic) AWEGuestHomeHeaderSectionViewModel *headerSectionVM;
@property (retain, nonatomic) AWETabContainerSectionViewModel *tabSectionVM;

- (void)setupViewModel;
- (id)lightCoverColor;
- (id)darkCoverColor;
- (id)lightCoverURL;
- (id)darkCoverURL;
- (void)setupTabSectionVM;
- (id)coverSetting;
- (id)fallBackCoverSetting;
- (void).cxx_destruct;

@end
