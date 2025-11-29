@interface AWELongPressPanelTopModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)trackCustomParamsShow;
- (id)trackCustomParamsClick;
- (BOOL)canShowForProfile;
- (BOOL)needShow;

@end
