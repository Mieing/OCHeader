@interface CommonAmbDataReportSDKObjcStatic : NSObject

+ (void)reportStandardPageEvent:(unsigned long long)a0 eventId:(id)a1 pageId:(unsigned long long)a2 pageName:(id)a3 paramsKeys:(id)a4 paramsValues:(id)a5 routeType:(unsigned int)a6 routeRule:(unsigned int)a7 isBatchReport:(BOOL)a8 sourcePageId:(unsigned int)a9 sourcePageName:(id)a10 sourcePageParamsKeys:(id)a11 sourcePageParamsValues:(id)a12;
+ (void)reportStandardViewEvent:(unsigned long long)a0 eventId:(id)a1 viewId:(id)a2 paramsKeys:(id)a3 paramsValues:(id)a4 routeType:(unsigned int)a5 routeRule:(unsigned int)a6 isBatchReport:(BOOL)a7 curPageId:(unsigned int)a8 curPageName:(id)a9 curPageParamsKeys:(id)a10 curPageParamsValues:(id)a11 sourcePageId:(unsigned int)a12 sourcePageName:(id)a13 sourcePageParamsKeys:(id)a14 sourcePageParamsValues:(id)a15;
+ (void)reportStandardPageEvents:(id)a0;
+ (void)reportStandardViewEvents:(id)a0;
+ (void)reportCustomEvents:(id)a0;
+ (id)changeParamInfos:(id)a0;
+ (id)handleJParamsValue:(id)a0;
+ (BOOL)isFlutterPage:(id)a0;
+ (id)handle28683Params:(id)a0 params:(id)a1 routeRule:(id)a2;

@end
