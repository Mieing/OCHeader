@interface AWEIMMsgDBRebuildPopupHelper : NSObject

+ (BOOL)shouldShowPopupWithUserID:(id)a0;
+ (void)showPopupIfNeededWithUserID:(id)a0;
+ (void)checkCurrentSqliteVersion;
+ (void)trackRestartRecoverIfNeeded:(BOOL)a0;

@end
