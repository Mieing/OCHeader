@interface AWELongPressPanelDuetViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowDuetWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowOnLine;
- (BOOL)needShow;

@end
