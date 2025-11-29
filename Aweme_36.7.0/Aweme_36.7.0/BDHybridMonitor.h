@interface BDHybridMonitor : NSObject

+ (id)generateIDForContainer;
+ (void)invalidateID:(id)a0 andData:(BOOL)a1;
+ (void)deleteData:(id)a0 isForce:(BOOL)a1;
+ (void)attach:(id)a0 webView:(id)a1;
+ (void)attach:(id)a0 LynxView:(id)a1;
+ (void)detach:(id)a0 webView:(id)a1;
+ (void)detach:(id)a0 LynxView:(id)a1;
+ (void)reportContainerError:(id)a0 withID:(id)a1 withError:(id)a2;
+ (void)collectBoolean:(id)a0 field:(id)a1 data:(BOOL)a2;
+ (void)collectString:(id)a0 field:(id)a1 data:(id)a2;
+ (void)collectLong:(id)a0 field:(id)a1 data:(long long)a2;
+ (void)collectInt:(id)a0 field:(id)a1 data:(int)a2;
+ (void)fetchContainerData:(id)a0 block:(id /* block */)a1;
+ (void)lynxReportCustomWithEventName:(id)a0 LynxView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 maySample:(BOOL)a5;
+ (void)webReportCustomWithEventName:(id)a0 webView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 maySample:(BOOL)a5;
+ (void)initContainerDataWithID:(id)a0;
+ (BOOL)diffDictionaryAllKeys:(id)a0 diffDict:(id)a1 depth:(long long)a2 maxDepath:(long long)a3;
+ (BOOL)diffCustomReport:(id)a0 diffRecord:(id)a1;
+ (void)useFormatDiffDictToReport:(id)a0 repeatCount:(long long)a1 platform:(long long)a2;
+ (id)callSelectorWith:(id)a0 obj:(id)a1;
+ (void)reportResourceStatus:(id)a0 resourceStatus:(long long)a1 resourceType:(long long)a2 resourceURL:(id)a3 resourceVersion:(id)a4;
+ (id)transformContainerType:(long long)a0;
+ (void)reportResourceStatus:(id)a0 resourceStatus:(long long)a1 resourceType:(long long)a2 resourceURL:(id)a3;
+ (void)reportFallBack:(long long)a0 sourceUrl:(id)a1 sourceContainer:(long long)a2 targetUrl:(id)a3 targetContainer:(long long)a4 aid:(id)a5;
+ (void)reportWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 timing:(id)a6 type:(long long)a7 platform:(long long)a8 aid:(id)a9 maySample:(BOOL)a10;
+ (id)formatDictToDiffWithEventName:(id)a0 bizTag:(id)a1 url:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 timing:(id)a6 aid:(id)a7 maySample:(BOOL)a8;
+ (void)lynxReportCustomWithEventName:(id)a0 LynxView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 timing:(id)a5 maySample:(BOOL)a6;
+ (id)callObjectSelectorWith:(id)a0 obj:(id)a1;
+ (BOOL)callLynxDeplicationCheckDynamicWithPefDict:(id)a0 customRecord:(id)a1;
+ (void)webReportCustomWithEventName:(id)a0 webView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 timing:(id)a5 maySample:(BOOL)a6;
+ (BOOL)callWebDeplicationCheckDynamicWithPefDict:(id)a0 customRecord:(id)a1;
+ (void)reportWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 type:(long long)a6 platform:(long long)a7;
+ (void)reportWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 type:(long long)a6 platform:(long long)a7 aid:(id)a8;
+ (void)reportWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 type:(long long)a6 platform:(long long)a7 aid:(id)a8 maySample:(BOOL)a9;
+ (void)lynxReportCustomWithEventName:(id)a0 LynxView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
+ (void)webReportCustomWithEventName:(id)a0 webView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
+ (void)reportWithEventName:(id)a0 url:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 platform:(long long)a5;
+ (void)tea_reportWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 type:(long long)a6 platform:(long long)a7 aid:(id)a8 maySample:(BOOL)a9;
+ (void)tea_SetIntValue:(id)a0 toDict:(id)a1 forKey:(id)a2;
+ (void)_aweLazyRegisterLoad_TrackTea;

@end
