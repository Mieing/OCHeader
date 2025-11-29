@interface AWELongPressPanelReeditModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)canReedit;
- (id)editBarInfo;
- (BOOL)needShow;

@end
