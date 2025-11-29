@interface WCFinderRedDotGameCenterHelper : NSObject

+ (void)addGameCenterRedDotAsTipsId:(id)a0 showStyle:(long long)a1 text:(id)a2 iconUrl:(id)a3 bigCardImageSize:(struct CGSize { double x0; double x1; })a4 ignoreLimit:(BOOL)a5 expireTime:(long long)a6 beginShowTime:(long long)a7 extInfo:(id)a8;
+ (id)genRedDotCtrlInfoAsTipsId:(id)a0 showStyle:(long long)a1 text:(id)a2 iconUrl:(id)a3 bigCardImageSize:(struct CGSize { double x0; double x1; })a4 ignoreLimit:(BOOL)a5 expireTime:(long long)a6 beginShowTime:(long long)a7 extInfo:(id)a8;
+ (BOOL)isGameCenterEntryPath:(id)a0;
+ (id)genCapsuleBubbleForText:(id)a0;
+ (id)getCurrentGameCenterRedDotExtInfo;
+ (void)disposeGameCenterRedDotForReasonType:(unsigned long long)a0;
+ (id)getCurrentGameCenterRedDotTipsId;
+ (BOOL)currentGameCenterHasRedDot;
+ (BOOL)gameRedDotTransferToFinderFramework;
+ (BOOL)checkGameCenterIsOnRedDotBanStage;
+ (BOOL)currentGameCenterHasSLevelRedDot;

@end
