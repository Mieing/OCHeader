@interface AWELongPressPanelPersonalPinModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)trackCustomParamsShow;
- (id)trackCustomParamsClick;
- (BOOL)needShow;

@end
