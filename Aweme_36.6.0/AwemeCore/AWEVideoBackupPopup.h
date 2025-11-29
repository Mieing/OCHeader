@interface AWEVideoBackupPopup : NSObject

+ (void)p_showNewStylePopupWithCover:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
+ (void)p_showDefaultPopupWithConfirmAction:(id /* block */)a0 cancelAction:(id /* block */)a1;
+ (void)showPopupWithDraft:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;

@end
