@interface AWELongPressPanelRelatedVideoIrrelevantViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)dislikeCollectAction;
- (void)trackForClick;
- (BOOL)needShow;

@end
