@interface AWELongPressPanelAddToCustomViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowAddToCustomWithAwemeModel:(id)a0;
+ (BOOL)p_hasDownloadPermissionWithAwemeModel:(id)a0;
+ (id)longPressPanelViewModel;

- (id)albumImagePickerViewController;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)trackAddEmoji;
- (BOOL)needShow;

@end
