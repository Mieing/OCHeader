@interface AWEIMMessageDeleteMenuItem : AWEIMBaseMessageMenuItem

+ (unsigned long long)menuItemType;
+ (void)doMessageMenuAction:(id)a0;
+ (id)menuItemTitle:(id)a0;
+ (id)menuItemImageName:(id)a0;
+ (id)menuItemLightImageURL:(id)a0;
+ (id)menuItemDarkImageURL:(id)a0;
+ (id)trackerName:(id)a0;
+ (void)deleteMessage:(id)a0;
+ (void)p_bizTrackDeleteMsg:(id)a0 convContext:(id)a1;
+ (void)dataReportForDeleteActionOnCell:(id)a0;

@end
