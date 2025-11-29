@interface AWEIMServiceReportOptimizeABUtility : NSObject

+ (void)registerABExperiments;
+ (BOOL)b2cLongPressUseReportOptimizeWithConversation:(id)a0;
+ (BOOL)b2cMultiSelectUseReportOptimizeWithConversation:(id)a0;
+ (BOOL)b2cDetailUseReportOptimizeWithConversation:(id)a0;
+ (BOOL)b2cFEUseReportOptimizeWithConversation:(id)a0;
+ (id)b2cReportOptimizeExpr:(id)a0;
+ (id)b2cChatOptimizeReportExprWithConversation:(id)a0;
+ (BOOL)shouldEnableFollowViewShowOptimize:(id)a0;

@end
