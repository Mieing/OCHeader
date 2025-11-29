@interface AWEIMFoldMessageUtility : NSObject

+ (BOOL)isNegativeMessage:(id)a0;
+ (BOOL)needFoldForMessage:(id)a0 context:(id)a1;
+ (BOOL)enableFoldPunishMessageExperiment:(long long)a0 messageSynExt:(id)a1;
+ (BOOL)hasPunishMarkForMessageSynExt:(id)a0;
+ (id)riskDisplayTextForIESMessage:(id)a0;
+ (id)riskTypeForMessage:(id)a0;
+ (BOOL)needFoldForMessage:(id)a0 riskMessageViewViewModel:(id)a1;
+ (BOOL)haveFoldTipsForMessage:(id)a0;
+ (void)checkAndSetFoldStatus:(id)a0 setFold:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })foldSizeForMessage:(id)a0;
+ (double)foldWidthForQuotedMessage;
+ (double)foldMessageRadius;
+ (BOOL)isNegativeIESMessage:(id)a0;
+ (id)riskTypeForIESMessage:(id)a0;
+ (void)removeNotUseExtForMessage:(id)a0;
+ (BOOL)shouldInFoldContainerForMessage:(id)a0 context:(id)a1;
+ (BOOL)haveFoldTipsForIESMessage:(id)a0;

@end
