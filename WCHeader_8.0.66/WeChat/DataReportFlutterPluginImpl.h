@class NSString, FlutterDataReportFlutter, NSMutableDictionary;

@interface DataReportFlutterPluginImpl : NSObject <MMUIViewControllerExt, DataReportPageEventExt, MMFlutterPlugin, FlutterDataReportHost> {
    FlutterDataReportFlutter *m_flutterAPI;
    NSMutableDictionary *m_flutterSessionIdMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportCustomCgiEventTime:(id)a0 eventId:(id)a1 params:(id)a2 bizId:(id)a3 isBatchReport:(id)a4 curPageInfo:(id)a5 sourcePageInfo:(id)a6;
+ (id)handleJParams:(id)a0;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)nativeAppIn;
- (void)nativeAppOut;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)MMUIViewControllerDidDisappear:(id)a0;
- (void)onPageEventAppear:(id)a0;
- (void)onPageEventDisappear:(id)a0;
- (void)sessionInPageHash:(long long)a0 pageId:(long long)a1 pageName:(id)a2 params:(id)a3 error:(id *)a4;
- (void)sessionOutPageHash:(long long)a0 pageId:(long long)a1 pageName:(id)a2 params:(id)a3 error:(id *)a4;
- (void)pageInPageHash:(long long)a0 pageId:(long long)a1 pageName:(id)a2 params:(id)a3 error:(id *)a4;
- (void)pageOutPageHash:(long long)a0 pageId:(long long)a1 pageName:(id)a2 params:(id)a3 error:(id *)a4;
- (void)viewClickViewId:(id)a0 params:(id)a1 curPageInfo:(id)a2 sourcePageInfo:(id)a3 error:(id *)a4;
- (void)viewExpViewId:(id)a0 params:(id)a1 curPageInfo:(id)a2 sourcePageInfo:(id)a3 error:(id *)a4;
- (void)viewUnexpViewId:(id)a0 params:(id)a1 curPageInfo:(id)a2 sourcePageInfo:(id)a3 error:(id *)a4;
- (void)reportCustomCgiEventTime:(long long)a0 eventId:(id)a1 params:(id)a2 bizId:(long long)a3 isBatchReport:(BOOL)a4 curPageInfo:(id)a5 sourcePageInfo:(id)a6 error:(id *)a7;
- (void)reportCustomEventTime:(long long)a0 eventId:(id)a1 params:(id)a2 routeRule:(long long)a3 curPageInfo:(id)a4 sourcePageInfo:(id)a5 error:(id *)a6;
- (void)reportStandardPageEventTime:(long long)a0 eventId:(id)a1 pageHash:(long long)a2 pageId:(long long)a3 pageName:(id)a4 params:(id)a5 routeRules:(id)a6 sourcePageInfo:(id)a7 error:(id *)a8;
- (void)reportStandardViewEventTime:(long long)a0 eventId:(id)a1 viewId:(id)a2 params:(id)a3 routeRules:(id)a4 curPageInfo:(id)a5 sourcePageInfo:(id)a6 error:(id *)a7;
- (void)reportAllOutEventTime:(long long)a0 pageId:(long long)a1 eventId:(id)a2 pageName:(id)a3 params:(id)a4 sourcePageInfo:(id)a5 error:(id *)a6;
- (BOOL)isFlutterPage:(id)a0;
- (void).cxx_destruct;

@end
