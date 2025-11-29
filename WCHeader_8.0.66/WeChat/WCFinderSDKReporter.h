@interface WCFinderSDKReporter : NSObject

+ (void)reset:(id)a0;
+ (void)cleanSDKReportForView:(id)a0;
+ (void)bind:(id)a0 viewId:(id)a1 proto:(long long)a2 commentScene:(int)a3 params:(id)a4 paramsBlock:(id /* block */)a5;
+ (void)bind:(id)a0 viewId:(id)a1 proto:(long long)a2 commentScene:(int)a3 reportPolicy:(unsigned long long)a4 params:(id)a5 paramsBlock:(id /* block */)a6;
+ (void)bind:(id)a0 viewId:(id)a1 proto:(long long)a2 commentScene:(int)a3 params:(id)a4 clickParamsBlock:(id /* block */)a5 exposeParamsBlock:(id /* block */)a6;
+ (void)cgiReportBind:(id)a0 viewId:(id)a1 commentScene:(int)a2 params:(id)a3 paramsBlock:(id /* block */)a4;
+ (void)bindPage:(unsigned long long)a0 page:(id)a1 pageName:(id)a2 proto:(long long)a3 paramsBlock:(id /* block */)a4;
+ (void)bindPage:(unsigned long long)a0 page:(id)a1 pageName:(id)a2 proto:(long long)a3 params:(id)a4;
+ (void)customReportPage:(unsigned long long)a0 page:(id)a1 eventID:(id)a2 proto:(long long)a3 params:(id)a4;
+ (void)customCgiReportPage:(unsigned long long)a0 page:(id)a1 pageName:(id)a2 eventID:(id)a3 proto:(long long)a4 params:(id)a5;
+ (void)cgiReportBindPage:(unsigned long long)a0 page:(id)a1 pageName:(id)a2 proto:(long long)a3 params:(id)a4;
+ (void)cgiReportBindPage:(unsigned long long)a0 page:(id)a1 pageName:(id)a2 proto:(long long)a3 params:(id)a4 paramsBlock:(id /* block */)a5;
+ (void)customReportExposeBindView:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 params:(id)a3;
+ (void)customReportClickBindView:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 params:(id)a3;
+ (void)customReportLongPressBindView:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 params:(id)a3;
+ (void)customReportEvent:(id)a0 view:(id)a1 viewID:(id)a2 proto:(unsigned long long)a3 params:(id)a4;
+ (void)customCGIReportExposeBindView:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 commentScene:(int)a3 params:(id)a4;
+ (void)customCGIReportUnexposeBindView:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 commentScene:(int)a3 params:(id)a4;
+ (void)customCGIReportClickBindView:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 commentScene:(int)a3 params:(id)a4;
+ (void)customReportExposeBindView:(id)a0 viewID:(id)a1 eventID:(id)a2 proto:(unsigned long long)a3 params:(id)a4;
+ (void)customEventID:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 commentScene:(int)a3 params:(id)a4;
+ (void)customCGIReportEventID:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 commentScene:(int)a3 params:(id)a4;
+ (void)customCGIReportEventID:(id)a0 viewID:(id)a1 proto:(unsigned long long)a2 commentScene:(int)a3 params:(id)a4 isBatchReport:(BOOL)a5;
+ (void)fixHalfScreenReport:(id)a0;
+ (id)commonReportDict;
+ (id)commonFeedReportDictWithContentVM:(id)a0;
+ (void)config:(id)a0 exportMinPercent:(double)a1;
+ (void)config:(id)a0 uniqueId:(id)a1;
+ (void)config:(id)a0 bindParentVCView:(id)a1;
+ (void)removeViewReportInfo:(id)a0;

@end
