@interface WCRedDotSessionReporter : NSObject

+ (id)getRenderFailLRUCache;
+ (void)reportRedDotRenderFailCtrlInfo:(id)a0 showInfo:(id)a1 params:(id)a2;
+ (void)reportRedDotAbandonCtrlInfo:(id)a0 params:(id)a1;
+ (void)reportRedDotBanWhenReceivedCtrlInfo:(id)a0 params:(id)a1;
+ (void)reportRedDotHitSimulLimitWhenReceivedCtrlInfo:(id)a0 params:(id)a1;
+ (void)reportRedDotAbortSimulLimitWhenReceivedCtrlInfo:(id)a0 params:(id)a1;
+ (void)reportRedDotCgiWithEventId:(id)a0 ctrlInfo:(id)a1 params:(id)a2;
+ (void)reportRedDotCgiWithEventId:(id)a0 ctrlInfo:(id)a1 showInfo:(id)a2 params:(id)a3;
+ (id)getSDKReportParamsWithCtrlInfo:(id)a0;
+ (BOOL)getViewId:(id *)a0 andCgiBizId:(id *)a1 ctrlInfo:(id)a2;
+ (BOOL)getViewId:(id *)a0 andCgiBizId:(id *)a1 ctrlInfo:(id)a2 showInfo:(id)a3;
+ (void)reportRedDotEventReplace20411:(id)a0;

@end
