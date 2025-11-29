@interface AWELongPressPanelTogetherBgPlaySwitchViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)getFeedTogetherPiP;
- (void)switchFeedTogetherPiP:(BOOL)a0;
- (BOOL)needShow;

@end
