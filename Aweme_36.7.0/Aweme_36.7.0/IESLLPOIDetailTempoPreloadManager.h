@class NSString, NSMutableDictionary, IESLLPOIDetailNGPageContext;

@interface IESLLPOIDetailTempoPreloadManager : NSObject <IESLLTempoContainerViewLifecycleDelegate>

@property (retain, nonatomic) NSMutableDictionary *preloadingViewDict;
@property (retain, nonatomic) NSMutableDictionary *readyViewDict;
@property (retain, nonatomic) NSMutableDictionary *tempoTimingParamsMap;
@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPOITempoWidget;
+ (id)preloadConfigsForBizCode:(id)a0 poiBackendType:(id)a1;
+ (id)poiTempoPreloadURLRuleWithBizCode:(id)a0;
+ (id)sharedInstance;

- (id)poiTempoConfig;
- (void)removePreloadViewForURL:(id)a0;
- (void)clearAllTimingInfo;
- (id)createTempoConfigModelWithUrl:(id)a0 nodeTag:(id)a1;
- (id)createTempoContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configModel:(id)a1;
- (id)timingParamsForUrl:(id)a0;
- (void)clearTimingParamsWithUrl:(id)a0;
- (id)viewForURL:(id)a0;
- (void)tempoContainer:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)tempoContainer:(id)a0 didLoadSuccessWithURL:(id)a1;
- (void)tempoContainer:(id)a0 didLoadFailureWithURL:(id)a1 error:(id)a2;
- (void)tempoContainer:(id)a0 didReceiveError:(id)a1;
- (void)tempoContainer:(id)a0 timingInfo:(id)a1;
- (void)tempoContainer:(id)a0 consoleLog:(id)a1;
- (id)getTempoJSBMethodBlocksWithUrl:(id)a0;
- (id)geckoIDForUrl:(id)a0;
- (double)fontScaleForTempoWithUrl:(id)a0;
- (id)preloadKey:(id)a0;
- (void)updateTimingParamsWithParamKey:(id)a0 paramValue:(id)a1 forKey:(id)a2;
- (void)preloadViewForTempoModel:(id)a0 dataParams:(id)a1;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)init;

@end
