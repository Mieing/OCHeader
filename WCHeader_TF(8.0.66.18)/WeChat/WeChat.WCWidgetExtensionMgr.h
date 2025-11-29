@interface WeChat.WCWidgetExtensionMgr : MMUserService <MMServiceProtocol>

- (void)onServiceClearData;
- (void)reloadAllWidgets;
- (BOOL)isOpenFromWidgetWithUrl:(id)a0;
- (BOOL)isOpenFromWidgetWithActivity:(id)a0;
- (BOOL)handleOpenWithUrl:(id)a0;
- (BOOL)handleOpenWithActivity:(id)a0;
- (id)init;

@end
