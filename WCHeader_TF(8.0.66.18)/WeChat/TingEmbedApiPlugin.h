@class NSString, TingEmbedCallbackApi, UIViewController;

@interface TingEmbedApiPlugin : NSObject <MMFlutterPlugin, TingEmbedApi>

@property (retain, nonatomic) TingEmbedCallbackApi *callbackApi;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)openFinderDiscoverDiscoverLineData:(id)a0 finderUsername:(id)a1 sessionBuff:(id)a2 error:(id *)a3;
- (void)openCategoryItemCategoryItem:(id)a0 recommendBuffer:(id)a1 scene:(long long)a2 error:(id *)a3;
- (id)getFinderProfileDynamicReportParamsWithError:(id *)a0;
- (void)openTingPagePageUrl:(id)a0 pageParams:(id)a1 error:(id *)a2;
- (void)openTingPageWithNewEngineRouteName:(id)a0 params:(id)a1 error:(id *)a2;
- (void)onReloadPage:(unsigned long long)a0;
- (void)onScrollViewDataCallbackOriginY30percent:(double)a0;
- (void).cxx_destruct;

@end
