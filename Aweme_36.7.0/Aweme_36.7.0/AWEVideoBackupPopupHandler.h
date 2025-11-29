@interface AWEVideoBackupPopupHandler : NSObject

+ (BOOL)isTeenModeEnabled;
+ (void)showAIDoingInnerNotificationWithCover:(id)a0 isTemplate:(BOOL)a1;
+ (void)showAIDoneInnerNotificationWithDraft:(id)a0 isTemplate:(BOOL)a1 title:(id)a2 cover:(id)a3 touchedHandler:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)showAIFailedInnerNotificationWithDraft:(id)a0 title:(id)a1 cover:(id)a2 touchedHandler:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)showDialogWithDraftId:(id)a0 headingContent:(id)a1 cover:(id)a2 clickActionBlock:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)coverWithDraft:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (void)showWithDraft:(id)a0 cover:(id)a1 completion:(id /* block */)a2;
+ (void)trackSaveDraftEventWithDraft:(id)a0 params:(id)a1;
+ (void)p_editActionWithDraft:(id)a0 completion:(id /* block */)a1;
+ (void)p_saveActionWithDraft:(id)a0 completion:(id /* block */)a1 isCrash:(BOOL)a2;
+ (void)p_cancelActionWithDraft:(id)a0 completion:(id /* block */)a1;
+ (void)p_trackPopupClickPosition:(id)a0;
+ (void)showPopUpWithDraft:(id)a0 flowControlModelStep:(long long)a1 completion:(id /* block */)a2;
+ (void)p_enterEditPageWithDraft:(id)a0 completion:(id /* block */)a1;
+ (BOOL)draftResourcesExist:(id)a0;

@end
