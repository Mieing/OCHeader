@interface AWELongPressPanelStoreViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowShareAsStoryWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;

- (void)shareToStory;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)p_enbaleLongPressShareAsStory;
- (void)didClickShareToStory;
- (BOOL)needShow;

@end
