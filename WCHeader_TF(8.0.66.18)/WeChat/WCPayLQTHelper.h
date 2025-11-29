@interface WCPayLQTHelper : NSObject

+ (id)operateIdFromUrl:(id)a0;
+ (id)traceInfoFromUrl:(id)a0;
+ (BOOL)validUrl:(id)a0;
+ (BOOL)urlForDetail:(id)a0;
+ (BOOL)urlForSave:(id)a0;
+ (BOOL)urlForFetch:(id)a0;
+ (void)showLqtDialog:(id)a0;
+ (void)showLqtDialog:(id)a0 continueHandler:(id /* block */)a1;
+ (void)handleDialogActionWithBtnData:(id)a0 continueHandler:(id /* block */)a1;
+ (void)openH5FromDialogWithUrl:(id)a0;
+ (void)openTinyappFromDialogWithUsername:(id)a0 path:(id)a1;

@end
