@interface AWELongPressPanelCreatorClassFeedbackViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)openFeedbackPopup;
- (BOOL)needShow;

@end
