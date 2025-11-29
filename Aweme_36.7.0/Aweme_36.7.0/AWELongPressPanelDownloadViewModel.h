@interface AWELongPressPanelDownloadViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShow;
- (void)download;

@end
