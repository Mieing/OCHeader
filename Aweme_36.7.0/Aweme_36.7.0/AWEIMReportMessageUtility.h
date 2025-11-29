@interface AWEIMReportMessageUtility : NSObject

+ (BOOL)canShowReportItemInConversation:(id)a0 inScenes:(unsigned long long)a1;
+ (id)addReportPageParams:(id)a0 withConv:(id)a1;
+ (void)trackClickReportWithParams:(id)a0;
+ (BOOL)b2cCanExposeReportItemInConversation:(id)a0 inScenes:(unsigned long long)a1;
+ (BOOL)canExposeReportItemInConversation:(id)a0;

@end
