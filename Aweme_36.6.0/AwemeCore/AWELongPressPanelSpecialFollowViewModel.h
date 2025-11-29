@interface AWELongPressPanelSpecialFollowViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) BOOL hadShow;

+ (id)longPressPanelViewModel;

- (void)switchDidChange:(id)a0;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)clickedInfoIcon;
- (id)specialLogExtra;
- (void)dissMissToShowSpecialFollowGuideIfNeeded;
- (BOOL)needShow;

@end
