@interface AWEIMMessageStickOnTopMenuItem : AWEIMBaseMessageMenuItem

+ (unsigned long long)menuItemType;
+ (BOOL)checkMessageType:(long long)a0 aweType:(long long)a1;
+ (void)doMessageMenuAction:(id)a0;
+ (id)menuItemTitle:(id)a0;
+ (id)menuItemImageName:(id)a0;
+ (id)menuItemLightImageURL:(id)a0;
+ (id)menuItemDarkImageURL:(id)a0;
+ (id)trackerName:(id)a0;
+ (id)trackerIconType:(id)a0;
+ (BOOL)checkIsValidConType:(id)a0;
+ (BOOL)checkRoleInCon:(id)a0;
+ (BOOL)checkMessageStatus:(id)a0;
+ (BOOL)canShowItemWithMessage:(id)a0 con:(id)a1;

@end
