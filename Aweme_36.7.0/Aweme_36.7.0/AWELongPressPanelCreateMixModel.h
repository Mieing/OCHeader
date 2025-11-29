@interface AWELongPressPanelCreateMixModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)trackShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)enterFromForTracker;
- (BOOL)needShow;

@end
