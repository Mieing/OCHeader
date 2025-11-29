@class NSString;

@interface AWEIMMenuEditMessageComponent : AWEIMComponentBase <AWEIMMessageListMenuProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)p_setRedDotShowCount:(long long)a0;
- (long long)p_redDotShowCount;

@end
