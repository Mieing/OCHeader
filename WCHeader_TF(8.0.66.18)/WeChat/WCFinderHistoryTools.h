@interface WCFinderHistoryTools : NSObject

+ (void)openHistory:(id /* block */)a0;
+ (void)clearHistory:(id)a0 complete:(id /* block */)a1;
+ (void)deleteHistory:(id)a0 itemType:(int)a1 vc:(id)a2 complete:(id /* block */)a3;
+ (void)_startOpLog:(int)a0 tids:(id)a1 complete:(id /* block */)a2;
+ (void)_startOpLog:(int)a0 idSetter:(id /* block */)a1 complete:(id /* block */)a2;
+ (void)showCloseConfirmOnView:(id)a0 hasContent:(BOOL)a1 doClose:(id /* block */)a2 onCancel:(id /* block */)a3;

@end
