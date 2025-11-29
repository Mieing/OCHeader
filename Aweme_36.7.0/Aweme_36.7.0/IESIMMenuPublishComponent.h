@interface IESIMMenuPublishComponent : AWEIMComponentBase <AWEIMMessageListMenuProtocol>

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (BOOL)canShowItemWithMessage:(id)a0 context:(id)a1;
- (id)menuItemTitle:(id)a0 context:(id)a1;
- (id)menuItemImageName:(id)a0 context:(id)a1;
- (id)menuItemLightImageURL:(id)a0 context:(id)a1;
- (id)menuItemDarkImageURL:(id)a0 context:(id)a1;
- (id)menuTrackerName:(id)a0 context:(id)a1;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:(id)a0 context:(id)a1;
- (void)willShowItemWithMessage:(id)a0;
- (BOOL)shouldShowRedDotTips:(id)a0 context:(id)a1;
- (id)init;

@end
