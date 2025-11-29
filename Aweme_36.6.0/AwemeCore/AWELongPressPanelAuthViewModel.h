@interface AWELongPressPanelAuthViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowPrivacySettingWithAwemeModel:(id)a0;
+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)shouldForbidChangePrivacyForXiguaStartAtlas;
- (BOOL)needShow;

@end
