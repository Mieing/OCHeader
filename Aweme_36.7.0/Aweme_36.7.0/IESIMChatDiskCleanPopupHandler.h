@interface IESIMChatDiskCleanPopupHandler : NSObject

+ (void)showCleanChatPopupWithSize:(id)a0 completion:(id /* block */)a1;
+ (void)showCleanFilePopupWithSize:(id)a0 fileTypeStr:(id)a1 completion:(id /* block */)a2;
+ (void)showSwitchFilterTypePanelWithTypes:(id)a0 selectedIndex:(unsigned long long)a1 selectBlock:(id /* block */)a2;
+ (void)showDoubleCheckSheetWithConfig:(id)a0 actionBlock:(id /* block */)a1;

@end
